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

#include <libmail/libmail.h>
#include <libmail/pop3.h>
#include <libmail/imap4.h>
#include <config.h>
#include <string.h>

#ifdef LIBMAIL_USE_SASL
#include <sasl/sasl.h>
#endif
#ifdef LIBMAIL_USE_TLS
#include <gnutls/gnutls.h>
#endif

void libmail_init_pop3_mailbox(pop3_mailbox_t *mailbox)
{
	mailbox->server.inet_family = LIBMAIL_IPV4;
	#ifdef LIBMAIL_USE_TLS
	mailbox->server.use_secure = LIBMAIL_USE_PLAIN;
	#endif
	strcpy(mailbox->server.port, "110");
	mailbox->auth.auth_type = AUTH_POP3_USERPASS;
	mailbox->server.state = DISCONNECTED;
}

void libmail_init_imap4_mailbox(imap4_mailbox_t *mailbox)
{
	mailbox->server.inet_family = LIBMAIL_IPV4;
	#ifdef LIBMAIL_USE_TLS
	mailbox->server.use_secure = LIBMAIL_USE_PLAIN;
	#endif
	strcpy(mailbox->server.port, "143");
	mailbox->auth.auth_type = AUTH_IMAP4_LOGIN;
	mailbox->server.state = DISCONNECTED;
	mailbox->command_tag = 1;
}

void libmail_init()
{
	#ifdef LIBMAIL_USE_TLS
	gnutls_global_init();
	#endif
}

void libmail_deinit()
{
	#ifdef LIBMAIL_USE_SASL
	sasl_done();
	#endif
	#ifdef LIBMAIL_USE_TLS
	gnutls_global_deinit();
	#endif
}

void libmail_init_mbox_mailbox(mbox_mailbox_t *mailbox)
{
	return;
}

void libmail_init_maildir_mailbox(maildir_mailbox_t *mailbox)
{
	return;
}

void set_pop3_username(pop3_mailbox_t *mailbox, const char *username)
{
	strncpy(mailbox->auth.username, username, LIBMAIL_BUFSIZE);
}

void set_imap4_username(imap4_mailbox_t *mailbox, const char *username)
{
	strncpy(mailbox->auth.username, username, LIBMAIL_BUFSIZE);
}

void set_pop3_password(pop3_mailbox_t *mailbox, const char *password)
{
	strncpy(mailbox->auth.password, password, LIBMAIL_BUFSIZE);
}

void set_imap4_password(imap4_mailbox_t *mailbox, const char *password)
{
	strncpy(mailbox->auth.password, password, LIBMAIL_BUFSIZE);
}

void set_pop3_hostname(pop3_mailbox_t *mailbox, const char *hostname)
{
	strncpy(mailbox->server.hostname, hostname, HOST_NAME_MAX);
}

void set_imap4_hostname(imap4_mailbox_t *mailbox, const char *hostname)
{
	strncpy(mailbox->server.hostname, hostname, HOST_NAME_MAX);
}

void set_pop3_port(pop3_mailbox_t *mailbox, const char *port)
{
	strncpy(mailbox->server.port, port, 5);
}

void set_imap4_port(imap4_mailbox_t *mailbox, const char *port)
{
	strncpy(mailbox->server.port, port, 5);
}
void set_pop3_auth_type(pop3_mailbox_t *mailbox, short auth_type)
{
	mailbox->auth.auth_type = auth_type;
}

void set_imap4_auth_type(imap4_mailbox_t *mailbox, short auth_type)
{
	mailbox->auth.auth_type = auth_type;
}

#ifdef LIBMAIL_USE_TLS
void set_pop3_security_level(pop3_mailbox_t *mailbox, short security_level)
{
	mailbox->server.use_secure = security_level;
}

void set_imap4_security_level(imap4_mailbox_t *mailbox, short security_level)
{
	mailbox->server.use_secure = security_level;
}
#endif

void set_pop3_inet_family(pop3_mailbox_t *mailbox, short inet_family)
{
	mailbox->server.inet_family = inet_family;
}

void set_imap4_inet_family(imap4_mailbox_t *mailbox, short inet_family)
{
	mailbox->server.inet_family = inet_family;
}

void set_imap4_mailbox(imap4_mailbox_t *mailbox, const char *mailbox_name)
{
	strncpy(mailbox->mailbox, mailbox_name, LIBMAIL_BUFSIZE); 
}

void set_mailbox_location(mbox_mailbox_t *mailbox, const char *filename)
{
	strncpy(mailbox->file, filename, PATH_MAX); 
}

void set_maildir_location(maildir_mailbox_t *mailbox, const char *dir)
{
	strncpy(mailbox->dir, dir, PATH_MAX);
}
