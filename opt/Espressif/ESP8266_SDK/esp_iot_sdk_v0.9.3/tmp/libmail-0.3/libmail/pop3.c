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
#include <libmail/pop3.h>
#include <libmail/imap4.h>

#ifdef LIBMAIL_USE_APOP
#include <libmail/md5sum.h>
#endif

#include <libmail/network.h>

#ifdef LIBMAIL_USE_SASL
#include <libmail/sasl.h>
#endif

#include <libmail/error.h>

#ifdef LIBMAIL_USE_TLS
#include <libmail/tls.h>
#endif

#ifdef LIBMAIL_USE_APOP
static char *get_timestamp(char *dst, char *src) {
    char *ptr1, *ptr2;
	size_t n_chars;

    ptr1 = strchr(src, '<');
    ptr2 = strchr(src, '>');

	if (ptr1 == NULL || ptr2 == NULL || ptr2 < ptr1)
		return NULL;
	n_chars = strlen(ptr1)-strlen(ptr2)+1;
    strncpy(dst, ptr1, n_chars);
    dst[n_chars] = '\0';
	return dst;
}
#endif

static int pop3_command_success(char *buffer) {
	if (strstr(buffer, "+OK") != NULL)
		return LIBMAIL_SUCCESS;
	else
		return LIBMAIL_SRVERROR;
}

int pop3_connect(pop3_mailbox_t *mailbox) {

	#ifdef LIBMAIL_USE_TLS
	char rcv_buffer[LIBMAIL_BUFSIZE+1];
	#endif

	if (mailbox->server.state != DISCONNECTED)
		return LIBMAIL_ALREADY_CONNECTED;

	if ((mailbox->server.sfd = connect_to_server(mailbox->server.hostname, mailbox->server.port, mailbox->server.inet_family)) < 0)
		return mailbox->server.sfd;

	mailbox->server.state = CONNECTED;
	
	if (readln(mailbox->greeting, NULL, LIBMAIL_BUFSIZE, &mailbox->server) != 0)
		return LIBMAIL_SYSERROR;
	if (pop3_command_success(mailbox->greeting) != 0)
		return LIBMAIL_SRVERROR;
	#ifdef LIBMAIL_USE_TLS
	if (mailbox->server.use_secure == LIBMAIL_USE_SECURE)
	{
		mailbox->server.state = HANDSHAKE;
		if (send_command("STLS\r\n", 6, &mailbox->server) != 0)
			return LIBMAIL_SYSERROR;
		if (readln(rcv_buffer, NULL, LIBMAIL_BUFSIZE, &mailbox->server) != 0)
			return LIBMAIL_SYSERROR;
		if (pop3_command_success(rcv_buffer) != 0)
			return LIBMAIL_SRVERROR;
		if (initialize_tls(&mailbox->server) != 0)
			return LIBMAIL_TLSERROR;
	}
	#endif
	
	return LIBMAIL_SUCCESS; 
}

int pop3_disconnect(pop3_mailbox_t *mailbox) {
	
	char buffer[LIBMAIL_BUFSIZE+1];

	if (mailbox->server.state == DISCONNECTED)
		return LIBMAIL_ALREADY_DISCONNECTED;
	if (send_command("QUIT\r\n", 6, &mailbox->server) != 0)
		return LIBMAIL_SYSERROR;
	if (read_response(buffer, NULL, LIBMAIL_BUFSIZE, &mailbox->server) != 0)
		return LIBMAIL_SYSERROR;
	if (pop3_command_success(buffer) != 0)
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
	if (mailbox->auth.auth_type == AUTH_POP3_SASL)
	{
		discard_sasl(&mailbox->auth);	
	}
	#endif
	mailbox->server.state = DISCONNECTED;
	return LIBMAIL_SUCCESS;
}

#ifdef LIBMAIL_USE_SASL
static int pop3_get_sasl_mechs(char *mechlist, libmail_remote_server_t *server) {

	char buffer[LIBMAIL_BUFSIZE+1];
	char *ptr;

	if (send_command("CAPA\r\n", 6, server) != LIBMAIL_SUCCESS)
		return LIBMAIL_SYSERROR;
	if (read_response(buffer, NULL, LIBMAIL_BUFSIZE, server) != 0)
		return LIBMAIL_SYSERROR;
	if (pop3_command_success(buffer) != LIBMAIL_SUCCESS)
		return LIBMAIL_SRVERROR;
	ptr = strstr(buffer, "SASL");
	if (ptr == NULL)
		return LIBMAIL_UNSUPPORTED_SASL;
	strcpy(mechlist, ptr+5);
	if (mechlist == NULL)
		return LIBMAIL_UNSUPPORTED_SASL;
	ptr = strchr(mechlist, '\r');
	if (ptr != NULL)
		*ptr = '\0';
	return LIBMAIL_SUCCESS;
}
#endif

int pop3_authenticate(pop3_mailbox_t *mailbox) {
	char snd_buffer[LIBMAIL_BUFSIZE+1];
	char rcv_buffer[LIBMAIL_BUFSIZE+1];
	int n_print;

	#ifdef LIBMAIL_USE_APOP
	unsigned char digest[33];
	char timestamp[LIBMAIL_BUFSIZE+1];
	char buffer[LIBMAIL_BUFSIZE+1];
	#endif

	#ifdef LIBMAIL_USE_SASL
	char mechlist[LIBMAIL_BUFSIZE+1];
	int result;
	#endif

	if (mailbox->server.state != CONNECTED && mailbox->server.state != HANDSHAKE)
		return LIBMAIL_ALREADY_AUTHORIZED;

	mailbox->server.state = AUTHORIZATION;

	switch (mailbox->auth.auth_type) {
		case AUTH_POP3_USERPASS:
			n_print = snprintf(snd_buffer, LIBMAIL_BUFSIZE+1, "USER %s\r\n", mailbox->auth.username);
			assert(n_print >= LIBMAIL_BUFSIZE+1 || n_print < 0);
			if (send_command(snd_buffer, n_print, &mailbox->server) != 0)
		        return LIBMAIL_SYSERROR;
			if (read_response(rcv_buffer, NULL, LIBMAIL_BUFSIZE, &mailbox->server) != 0)
				return LIBMAIL_SYSERROR;
			if (pop3_command_success(rcv_buffer) != 0)
        		return LIBMAIL_POP3_INVALID_USER;
			n_print = snprintf(snd_buffer, LIBMAIL_BUFSIZE+1, "PASS %s\r\n", mailbox->auth.password);
			assert(n_print >= LIBMAIL_BUFSIZE+1 || n_print < 0);
		   	if (send_command(snd_buffer, n_print, &mailbox->server) != 0)
				return LIBMAIL_SYSERROR;
			if (read_response(rcv_buffer, NULL, LIBMAIL_BUFSIZE, &mailbox->server) != 0)
				return LIBMAIL_SYSERROR;
			if (pop3_command_success(rcv_buffer) != 0)
        		return LIBMAIL_POP3_INVALID_PASSWORD;
			break;
		#ifdef LIBMAIL_USE_APOP
		case AUTH_POP3_APOP:
			if (get_timestamp(timestamp, mailbox->greeting) == NULL)
				return LIBMAIL_POP3_UNSUPPORTED_APOP;
			n_print = snprintf(buffer, LIBMAIL_BUFSIZE+1, "%s%s", timestamp, mailbox->auth.password); 
			assert(n_print >= LIBMAIL_BUFSIZE+1 || n_print < 0);
			n_print = snprintf(snd_buffer, LIBMAIL_BUFSIZE+1, "APOP %s %s\r\n", mailbox->auth.username, md5_digest(digest, buffer));
			assert(n_print >= LIBMAIL_BUFSIZE+1 || n_print < 0);
			if (send_command(snd_buffer, n_print, &mailbox->server) != 0)
				return LIBMAIL_SYSERROR;
			if (read_response(rcv_buffer, NULL, LIBMAIL_BUFSIZE, &mailbox->server) != 0)
				return LIBMAIL_SYSERROR;
			if (pop3_command_success(rcv_buffer) != 0)
        		return LIBMAIL_POP3_MD5_ERROR;
			break;
		#endif
		#ifdef LIBMAIL_USE_SASL
		case AUTH_POP3_SASL:
			if ((result = pop3_get_sasl_mechs(mechlist, &mailbox->server)) != LIBMAIL_SUCCESS)
				return result;
			if ((result = sasl_authenticate("pop", mechlist, LIBMAIL_BUFSIZE, rcv_buffer, &mailbox->server, 
				&mailbox->auth, "AUTH")) != LIBMAIL_SUCCESS)
				return result;
			if (read_response(rcv_buffer, NULL, LIBMAIL_BUFSIZE, &mailbox->server) != 0)
				return LIBMAIL_SYSERROR;
			if (pop3_command_success(rcv_buffer) != 0)
        		return LIBMAIL_SASL_ERROR;
			break;
		#endif
		default:
			return LIBMAIL_INVALID_AUTH_METHOD; 
	}
	
	return LIBMAIL_SUCCESS;
}

int pop3_check(pop3_mailbox_t *mailbox, int *n_new_messages, int *n_messages) {
	
	char buffer[LIBMAIL_BUFSIZE+1];

	if (mailbox->server.state != TRANSACTION && mailbox->server.state != AUTHORIZATION)
		return LIBMAIL_NOT_CONNECTED;

	mailbox->server.state = TRANSACTION;

	if (send_command("STAT\r\n", 6, &mailbox->server) != 0)
        return LIBMAIL_SYSERROR;
	if (read_response(buffer, NULL, LIBMAIL_BUFSIZE, &mailbox->server) != 0)
		return LIBMAIL_SYSERROR;
	if (pop3_command_success(buffer) != 0)
        return LIBMAIL_SRVERROR;
	sscanf(buffer, "+OK %d", n_messages);
	// TODO next line should be replaced with the real check of unread messages (use of UIDL)
	*n_new_messages = *n_messages;
	//
	return LIBMAIL_SUCCESS;
}
