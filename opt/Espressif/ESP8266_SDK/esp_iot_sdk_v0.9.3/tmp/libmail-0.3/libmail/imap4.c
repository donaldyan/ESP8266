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
#include <string.h>
#include <unistd.h>

#include <assert.h>

#include <libmail/libmail.h>
#include <libmail/commons.h>
#include <libmail/imap4.h>
#include <libmail/network.h>

#ifdef LIBMAIL_USE_SASL
#include <libmail/sasl.h>
#endif

#include <libmail/error.h>

#include <libmail/tls.h>

static int imap4_command_tagged_success(int tag, char *buffer) {
	char valid_response[8];
	int n_print;

	n_print = snprintf(valid_response, 8, "%04d OK", tag);
	assert(n_print >= 8 || n_print < 0);
	if (strstr(buffer, valid_response) != NULL)
		return LIBMAIL_SUCCESS;
	else
		return LIBMAIL_SRVERROR;
}

static int imap4_command_success(char *buffer) {
	if (strstr(buffer, "* OK") != NULL)
		return LIBMAIL_SUCCESS;
	else
		return LIBMAIL_SRVERROR;
}

int imap4_connect(imap4_mailbox_t *mailbox) {

	char rcv_buffer[LIBMAIL_BUFSIZE+1];
	
	#ifdef LIBMAIL_USE_TLS
	char snd_buffer[LIBMAIL_BUFSIZE+1];
	int n_print;
	#endif
	
	if (mailbox->server.state != DISCONNECTED)
		return LIBMAIL_ALREADY_CONNECTED;

	if ((mailbox->server.sfd = connect_to_server(mailbox->server.hostname, mailbox->server.port, mailbox->server.inet_family)) < 0)
		return mailbox->server.sfd;
	
	mailbox->server.state = CONNECTED;

	if (readln(rcv_buffer, NULL, LIBMAIL_BUFSIZE, &mailbox->server) != 0)
		return LIBMAIL_SYSERROR;
	if (imap4_command_success(rcv_buffer) != 0)
		return LIBMAIL_SRVERROR;
	#ifdef LIBMAIL_USE_TLS
	if (mailbox->server.use_secure == LIBMAIL_USE_SECURE)
	{
		mailbox->server.state = HANDSHAKE;
		n_print = snprintf(snd_buffer, LIBMAIL_BUFSIZE+1, "%04d STARTTLS\r\n", mailbox->command_tag);
		assert(n_print >= LIBMAIL_BUFSIZE+1 || n_print < 0);
		if (send_command(snd_buffer, n_print, &mailbox->server) != 0)
			return LIBMAIL_SYSERROR;
		if (readln(rcv_buffer, NULL, LIBMAIL_BUFSIZE, &mailbox->server) != 0)
			return LIBMAIL_SYSERROR;
		if (imap4_command_tagged_success(mailbox->command_tag++, rcv_buffer) != 0)
			return LIBMAIL_SRVERROR;
		if (initialize_tls(&mailbox->server) != 0)
			return LIBMAIL_TLSERROR;
	}
	#endif

	return LIBMAIL_SUCCESS; 
}


int imap4_disconnect(imap4_mailbox_t *mailbox) {
	
	char rcv_buffer[LIBMAIL_BUFSIZE+1];
	char snd_buffer[LIBMAIL_BUFSIZE+1];
	int n_print;
	
	if (mailbox->server.state == DISCONNECTED)
		return LIBMAIL_ALREADY_DISCONNECTED;
	n_print = snprintf(snd_buffer, LIBMAIL_BUFSIZE+1, "%04d LOGOUT\r\n", mailbox->command_tag);
	assert(n_print >= LIBMAIL_BUFSIZE+1 || n_print < 0);
	if (send_command(snd_buffer, n_print, &mailbox->server) != 0)
		return LIBMAIL_SYSERROR;
	if (read_response(rcv_buffer, NULL, LIBMAIL_BUFSIZE, &mailbox->server) != 0)
		return LIBMAIL_SYSERROR;
	if (imap4_command_tagged_success(mailbox->command_tag++, rcv_buffer) != 0)
		return LIBMAIL_SRVERROR;
	if (close(mailbox->server.sfd) != 0)
		return LIBMAIL_SYSERROR;
	#ifdef LIBMAIL_USE_TLS
	if (mailbox->server.use_secure == LIBMAIL_USE_SECURE)
	{
		discard_tls(&mailbox->server);
	}	
	#endif
	#ifdef LIBMAIL_USE_SASL
	if (mailbox->auth.auth_type == AUTH_IMAP4_SASL)
	{
		discard_sasl(&mailbox->auth);	
	}
	#endif
	mailbox->server.state = DISCONNECTED;
	return LIBMAIL_SUCCESS;
}

#ifdef LIBMAIL_USE_SASL
static int imap4_get_sasl_mechs(char *mechlist, imap4_mailbox_t *mailbox) {

	char sndbuffer[LIBMAIL_BUFSIZE+1];
	char rcvbuffer[LIBMAIL_BUFSIZE+1];
	char *ptr, *mechlist_ptr;
	int n_print;
	int n_mechs = 0;

	n_print = snprintf(sndbuffer, LIBMAIL_BUFSIZE+1, "%04d CAPABILITY\r\n", mailbox->command_tag);
	assert(n_print >= LIBMAIL_BUFSIZE+1 || n_print < 0);
	if (send_command(sndbuffer, n_print, &mailbox->server) != LIBMAIL_SUCCESS)
		return LIBMAIL_SYSERROR;
	if (read_response(rcvbuffer, NULL, LIBMAIL_BUFSIZE, &mailbox->server) != 0)
		return LIBMAIL_SYSERROR;
	if (imap4_command_tagged_success(mailbox->command_tag++, rcvbuffer) != LIBMAIL_SUCCESS)
		return LIBMAIL_SRVERROR;

	ptr = strstr(rcvbuffer, "AUTH=");

	if (ptr == NULL)
		return LIBMAIL_UNSUPPORTED_SASL;
	
	mechlist_ptr = mechlist;
	while ((ptr = strstr(ptr, "AUTH=")) != NULL) {
		if (n_mechs != 0)
			*mechlist_ptr++ = ' ';
		n_mechs++;
		ptr += 5;
		while (*ptr != ' ') {
			*mechlist_ptr++ = *ptr++;
		}
	}	
	*mechlist_ptr = '\0';

	if (n_mechs == 0)
		return LIBMAIL_UNSUPPORTED_SASL;
	return LIBMAIL_SUCCESS;
}
#endif

int imap4_authenticate(imap4_mailbox_t *mailbox) {
	char snd_buffer[LIBMAIL_BUFSIZE+1];
	char rcv_buffer[LIBMAIL_BUFSIZE+1];
	int n_print;
	
	#ifdef LIBMAIL_USE_SASL
	char mechlist[LIBMAIL_BUFSIZE+1];
	char auth_command[20];
	int result;
	#endif
	
	if (mailbox->server.state != CONNECTED && mailbox->server.state != HANDSHAKE)
		return LIBMAIL_ALREADY_AUTHORIZED;
	
	mailbox->server.state = AUTHORIZATION;

	switch (mailbox->auth.auth_type) {
		case AUTH_IMAP4_NONE:
			break;
		case AUTH_IMAP4_LOGIN:
			n_print = snprintf(snd_buffer, LIBMAIL_BUFSIZE+1, "%04d LOGIN %s %s\r\n", mailbox->command_tag, mailbox->auth.username, mailbox->auth.password);
			assert(n_print >= LIBMAIL_BUFSIZE+1 || n_print < 0);
			if (send_command(snd_buffer, n_print, &mailbox->server) != LIBMAIL_SUCCESS)
		        return LIBMAIL_SYSERROR;
			if (read_response(rcv_buffer, NULL, LIBMAIL_BUFSIZE, &mailbox->server) != 0)
				return LIBMAIL_SYSERROR;
			if (imap4_command_tagged_success(mailbox->command_tag++, rcv_buffer) != LIBMAIL_SUCCESS)
        		return LIBMAIL_IMAP4_INVALID_USERPASS;
			break;
		#ifdef LIBMAIL_USE_SASL
		case AUTH_IMAP4_SASL:
			if ((result = imap4_get_sasl_mechs(mechlist, mailbox)) != LIBMAIL_SUCCESS)
				return result;
			n_print = snprintf(auth_command, 20, "%04d AUTHENTICATE", mailbox->command_tag);
			assert(n_print >= LIBMAIL_BUFSIZE+1 || n_print < 0);
			if ((result = sasl_authenticate("imap", mechlist, LIBMAIL_BUFSIZE, rcv_buffer, &mailbox->server,  
				&mailbox->auth, auth_command)) != LIBMAIL_SUCCESS)
				return result;
			if (read_response(rcv_buffer, NULL, LIBMAIL_BUFSIZE, &mailbox->server) != 0)
				return LIBMAIL_SYSERROR;
			if (imap4_command_tagged_success(mailbox->command_tag++, rcv_buffer) != LIBMAIL_SUCCESS)
				return LIBMAIL_SASL_ERROR;
			break;
		#endif
		default:
			return LIBMAIL_INVALID_AUTH_METHOD;
	}
	return LIBMAIL_SUCCESS;
}

int imap4_check(imap4_mailbox_t *mailbox, int *n_new_messages, int *n_messages) {
	
	char rcv_buffer[LIBMAIL_BUFSIZE+1];
	char snd_buffer[LIBMAIL_BUFSIZE+1];
	int n_print;
	char *buf;
	
	if (mailbox->server.state != TRANSACTION && mailbox->server.state != AUTHORIZATION)
		return LIBMAIL_NOT_CONNECTED;

	mailbox->server.state = TRANSACTION;
	n_print = snprintf(snd_buffer, LIBMAIL_BUFSIZE+1, "%04d STATUS %s (MESSAGES UNSEEN)\r\n", mailbox->command_tag, mailbox->mailbox);
	assert(n_print >= LIBMAIL_BUFSIZE+1 || n_print < 0);
	if (send_command(snd_buffer, n_print, &mailbox->server) != LIBMAIL_SUCCESS)
        return LIBMAIL_SYSERROR;
	if (read_response(rcv_buffer, NULL, LIBMAIL_BUFSIZE, &mailbox->server) != 0)
		return LIBMAIL_SYSERROR;
	if (imap4_command_tagged_success(mailbox->command_tag++, rcv_buffer) != LIBMAIL_SUCCESS)
        return LIBMAIL_IMAP4_INVALID_MAILBOX;
	buf = strstr(rcv_buffer, "* STATUS");
	buf = strstr(buf, "(MESSAGES ");
	sscanf(buf, "(MESSAGES %d UNSEEN %d)", n_messages, n_new_messages);
	return LIBMAIL_SUCCESS;
}
