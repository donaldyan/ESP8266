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

#ifndef LIBMAIL_H
#define LIBMAIL_H 1

#include <config.h>

#include <sys/types.h>
#include <limits.h>

#ifdef LIBMAIL_USE_TLS
#include <gnutls/gnutls.h>
#endif

#ifdef LIBMAIL_USE_SASL
#include <sasl/sasl.h>
#endif

#include <libmail/libmail_intl.h>

enum inet_families {
	LIBMAIL_IPV4, LIBMAIL_IPV6
};

enum states {
	CONNECTED, HANDSHAKE, AUTHORIZATION, TRANSACTION, DISCONNECTED
};

enum content_types {
	LIBMAIL_USE_SECURE, LIBMAIL_USE_PLAIN
};

typedef struct libmail_auth libmail_auth_t;

typedef struct libmail_remote_server libmail_remote_server_t;

typedef struct pop3_mailbox pop3_mailbox_t;

typedef struct imap4_mailbox imap4_mailbox_t;

typedef struct mbox_mailbox mbox_mailbox_t;

typedef struct maildir_mailbox maildir_mailbox_t;

void libmail_init(void);

void libmail_deinit(void);

void libmail_init_pop3_mailbox(pop3_mailbox_t *mailbox);

void libmail_init_imap4_mailbox(imap4_mailbox_t *mailbox);

void set_pop3_username(pop3_mailbox_t *mailbox, const char *username);

void set_imap4_username(imap4_mailbox_t *mailbox, const char *username);

void set_pop3_password(pop3_mailbox_t *mailbox, const char *password);

void set_imap4_password(imap4_mailbox_t *mailbox, const char *password);

void set_pop3_hostname(pop3_mailbox_t *mailbox, const char *hostname);

void set_imap4_hostname(imap4_mailbox_t *mailbox, const char *hostname);

void set_pop3_port(pop3_mailbox_t *mailbox, const char *port);

void set_imap4_port(imap4_mailbox_t *mailbox, const char *port);

void set_pop3_auth_type(pop3_mailbox_t *mailbox, short auth_type);

void set_imap4_auth_type(imap4_mailbox_t *mailbox, short auth_type);

#ifdef LIBMAIL_USE_TLS
void set_pop3_security_level(pop3_mailbox_t *mailbox, short security_level);

void set_imap4_security_level(imap4_mailbox_t *mailbox, short security_level);
#endif

void set_pop3_inet_family(pop3_mailbox_t *mailbox, short inet_family);

void set_imap4_inet_family(imap4_mailbox_t *mailbox, short inet_family);

void set_imap4_mailbox(imap4_mailbox_t *mailbox, const char *mailbox_name);

void set_mailbox_location(mbox_mailbox_t *mailbox, const char *filename);

void set_maildir_location(maildir_mailbox_t *mailbox, const char *dir);

#endif
