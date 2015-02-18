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

#ifndef LIBMAIL_INTL_H
#define LIBMAIL_INTL_H 1

#include <config.h>

#include <sys/types.h>
#include <limits.h>

#ifdef LIBMAIL_USE_TLS
#include <gnutls/gnutls.h>
#endif

#ifdef LIBMAIL_USE_SASL
#include <sasl/sasl.h>
#endif

// Constraints
#define LIBMAIL_BUFSIZE LIBMAIL_USE_BUFSIZE

struct libmail_auth {
	char username[LIBMAIL_BUFSIZE+1]; 
	char password[LIBMAIL_BUFSIZE+1]; 
	short auth_type;
	#ifdef LIBMAIL_USE_SASL
	sasl_conn_t *sasl_session;
	#endif
};

struct libmail_remote_server {
	char hostname[HOST_NAME_MAX+1];
    char port[6];
	short inet_family;
	#ifdef LIBMAIL_USE_TLS
	short use_secure;
	gnutls_session_t tls_session;
	#endif
    int sfd;
	short state;
};

struct pop3_mailbox {
	struct libmail_remote_server server;
    struct libmail_auth auth;
    char greeting[LIBMAIL_BUFSIZE+1];
};

struct imap4_mailbox {
    struct libmail_remote_server server;
    struct libmail_auth auth;
	int command_tag;
	char mailbox[LIBMAIL_BUFSIZE+1];
};

struct mbox_mailbox {
	char file[PATH_MAX+1];
};

struct maildir_mailbox {
	char dir[PATH_MAX+1];
};

#endif
