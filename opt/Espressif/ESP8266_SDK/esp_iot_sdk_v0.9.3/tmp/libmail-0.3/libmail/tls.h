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

#ifdef LIBMAIL_USE_TLS

#ifndef LIBMAIL_TLS_H
	#define LIBMAIL_TLS_H 1

	#include <config.h>
	#include <libmail/libmail.h>

	int initialize_tls(libmail_remote_server_t *server);

	int discard_tls(libmail_remote_server_t *server);

#endif

#endif
