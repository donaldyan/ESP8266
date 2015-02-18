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

#ifndef LIBMAIL_POP3_H
	
	#define LIBMAIL_POP3_H 1
	
	#include <config.h>

	#define AUTH_POP3_USERPASS 1
	#define AUTH_POP3_APOP 2
	#define AUTH_POP3_SASL 3

	int pop3_connect(pop3_mailbox_t *mailbox);
	int pop3_disconnect(pop3_mailbox_t *mailbox);
	int pop3_authenticate(pop3_mailbox_t *mailbox);
	int pop3_check(pop3_mailbox_t *mailbox, int *n_new_messages, int *n_messages);

#endif
