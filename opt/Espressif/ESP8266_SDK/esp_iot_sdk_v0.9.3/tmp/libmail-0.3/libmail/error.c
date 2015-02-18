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

#include <string.h>
#include <errno.h>

#include <libmail/error.h>

const char *libmail_strerror(int code) {

	switch (code) {
		case LIBMAIL_SUCCESS:
			return "libmail: success";
		case LIBMAIL_SYSERROR:
			return strerror(errno);
		case LIBMAIL_DNSERROR:
			return "libmail: DNS error when trying to resolv remote server's IP address";
		case LIBMAIL_SRVERROR:
			return "libmail: Error in command sent to server";
		#ifdef LIBMAIL_USE_APOP
		case LIBMAIL_POP3_UNSUPPORTED_APOP:
			return "libmail: APOP is not supported by the remote server";
		case LIBMAIL_POP3_MD5_ERROR:
			return "libmail: Error in MD5 digest, used in APOP authentication";
		#endif
		#ifdef LIBMAIL_USE_SASL
		case LIBMAIL_SASL_ERROR:
			return "libmail: Error during SASL authentication";
		case LIBMAIL_UNSUPPORTED_SASL:
			return "libmail: SASL is not supported by the remote server";
		#endif
		case LIBMAIL_MBOX_ISDIR:
			return "libmail: A unix-like mailbox cannot be a directory";
		case LIBMAIL_IMAP4_INVALID_MAILBOX:
			return "libmail: Invalid IMAP4 mailbox selected";
		case LIBMAIL_POP3_INVALID_USER:
			return "libmail: Invalid username";
		case LIBMAIL_POP3_INVALID_PASSWORD:
			return "libmail: Invalid password";
		case LIBMAIL_IMAP4_INVALID_USERPASS:
			return "libmail: Invalid username or password in LOGIN command";
		#ifdef LIBMAIL_USE_TLS
		case LIBMAIL_TLSERROR:
			return "libmail: Error in TLS/SSL transaction context";
		#endif
		case LIBMAIL_ALREADY_CONNECTED:
			return "libmail: Already connected";
		case LIBMAIL_ALREADY_DISCONNECTED:
			return "libmail: Already disconnected";
		case LIBMAIL_ALREADY_AUTHORIZED:
			return "libmail: Already authorized or not connected";
		case LIBMAIL_NOT_CONNECTED:
			return "libmail: Not connected to any server";
		case LIBMAIL_INVALID_AUTH_METHOD:
			return "libmail: Invalid authentication method";
		default:
			return "libmail: Unknown error";
	}
}
