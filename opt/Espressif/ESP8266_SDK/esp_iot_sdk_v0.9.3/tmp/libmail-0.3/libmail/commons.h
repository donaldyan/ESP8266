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

#ifndef LIBMAIL_COMMONS_H
	#define LIBMAIL_COMMONS_H 1
	
	#include <libmail/libmail.h>

	int send_command(const char *sndbuffer, int sndlen, libmail_remote_server_t *server);

	int readln(char *rcvbuffer, int *rcvlen, int maxlen, libmail_remote_server_t *server);

	int read_response(char *rcvbuffer, int *rcvlen, int maxlen, libmail_remote_server_t *server);

#endif