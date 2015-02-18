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


#ifndef LIBMAIL_ERROR_H
	#define LIBMAIL_ERROR_H 1

	#include <config.h>

	const char *libmail_strerror(int code);

	enum error_codes {
		LIBMAIL_SUCCESS = 0, LIBMAIL_SYSERROR, LIBMAIL_DNSERROR, LIBMAIL_SRVERROR,
		#ifdef LIBMAIL_USE_APOP
		LIBMAIL_POP3_UNSUPPORTED_APOP, LIBMAIL_POP3_MD5_ERROR,
		#endif
		#ifdef LIBMAIL_USE_SASL
		LIBMAIL_SASL_ERROR, LIBMAIL_UNSUPPORTED_SASL,
		#endif
		LIBMAIL_MBOX_ISDIR, LIBMAIL_IMAP4_INVALID_MAILBOX, LIBMAIL_POP3_INVALID_USER, LIBMAIL_POP3_INVALID_PASSWORD, LIBMAIL_IMAP4_INVALID_USERPASS,
		#ifdef LIBMAIL_USE_TLS
		LIBMAIL_TLSERROR, 
		#endif
		LIBMAIL_ALREADY_CONNECTED, LIBMAIL_ALREADY_DISCONNECTED, LIBMAIL_ALREADY_AUTHORIZED, LIBMAIL_NOT_CONNECTED, LIBMAIL_INVALID_AUTH_METHOD,
	};
	
#endif
