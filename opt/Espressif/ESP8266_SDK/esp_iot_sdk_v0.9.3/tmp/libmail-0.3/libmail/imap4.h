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

#ifndef LIBMAIL_IMAP4_H

	#include <config.h>

	#define LIBMAIL_IMAP4_H
	#define AUTH_IMAP4_NONE 0
	#define AUTH_IMAP4_LOGIN 1
	#ifdef LIBMAIL_USE_SASL
		#define AUTH_IMAP4_SASL 2
	#endif

	int imap4_connect(imap4_mailbox_t *mailbox);
	int imap4_disconnect(imap4_mailbox_t *mailbox);
	int imap4_authenticate(imap4_mailbox_t *mailbox);
	int imap4_check(imap4_mailbox_t *mailbox, int *n_new_messages, int *n_messages);

#endif
