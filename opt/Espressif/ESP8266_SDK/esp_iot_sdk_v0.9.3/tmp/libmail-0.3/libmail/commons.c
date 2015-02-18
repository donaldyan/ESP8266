/* This file is part of libmail.
 
(c) 2009 - Dimitris Mandalidis <mandas@users.sourceforge.net>

libmail is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

libmail is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with libmail.  If not, see <http://www.gnu.org/licenses/>.

*/

#include <config.h>

#include <stdio.h>
#include <unistd.h>

#include <libmail/libmail.h>
#include <libmail/error.h>

#ifdef LIBMAIL_USE_TLS
#include <gnutls/gnutls.h>
#endif

int send_command(const char *sndbuffer, int sndlen, libmail_remote_server_t *server)
{
	int n_write;

	if (sndlen != 0) { 
		#ifdef NDEBUG
    	fprintf(stderr, "libmail: Sending command: %s\n", sndbuffer);
	    #endif
	
		#ifdef LIBMAIL_USE_TLS
		if (server->use_secure == LIBMAIL_USE_SECURE && (server->state == TRANSACTION || server->state == AUTHORIZATION))
			n_write = gnutls_record_send(server->tls_session, sndbuffer, sndlen);
		else
			n_write = write(server->sfd, sndbuffer, sndlen);
		#else
		n_write = write(server->sfd, sndbuffer, sndlen);
		#endif

		if (n_write != sndlen)
			return LIBMAIL_SYSERROR;
	}
	return LIBMAIL_SUCCESS;
}

int readln(char *rcvbuffer, int *rcvlen, int maxlen, libmail_remote_server_t *server)
{
	int n_read;
	char *buf;

	buf = rcvbuffer;
	n_read = 0;
	while (n_read <= maxlen)
	{
		if ((n_read += read(server->sfd, buf, 1)) < 0)
			return LIBMAIL_SYSERROR;
		if (*buf++ == '\n')
			break;
	}

	rcvbuffer[n_read] = '\0';
	if (rcvlen != NULL)
		*rcvlen = n_read;
	
	#ifdef NDEBUG
	fprintf(stderr, "libmail: Received %s\n", rcvbuffer);
	#endif
	
	return LIBMAIL_SUCCESS;
}

int read_response(char *rcvbuffer, int *rcvlen, int maxlen, libmail_remote_server_t *server)
{
	int n_read;
	
	#ifdef LIBMAIL_USE_TLS
	if (server->use_secure == LIBMAIL_USE_SECURE && (server->state == TRANSACTION || server->state == AUTHORIZATION))
	{
		if ((n_read = gnutls_record_recv(server->tls_session, rcvbuffer, maxlen)) < 0)
		{	
			gnutls_perror(n_read);
			return LIBMAIL_TLSERROR;
		}
	}
	else 
	{
		if ((n_read = read(server->sfd, rcvbuffer, maxlen)) < 0)
			return LIBMAIL_SYSERROR;
		rcvbuffer[n_read] = '\0';
	}
	#else
	if ((n_read = read(server->sfd, rcvbuffer, maxlen)) < 0)
		return LIBMAIL_SYSERROR;
	rcvbuffer[n_read] = '\0';
	#endif

	if (rcvlen != NULL)
		*rcvlen = n_read;

	#ifdef NDEBUG
	fprintf(stderr, "libmail: Received %s\n", rcvbuffer);
	#endif

	return LIBMAIL_SUCCESS;
}
