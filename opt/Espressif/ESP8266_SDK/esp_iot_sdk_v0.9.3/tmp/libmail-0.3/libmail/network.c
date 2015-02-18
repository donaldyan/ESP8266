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

#ifdef NDEBUG
#include <stdio.h>
#endif

#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <netdb.h>

#include <libmail/libmail.h>
#include <libmail/error.h>

static void init_criteria(struct addrinfo *hints, short ai_family) {
	memset(hints, 0, sizeof(struct addrinfo));
	hints->ai_flags = AI_IDN;
	if (ai_family == LIBMAIL_IPV4)
		hints->ai_family = AF_INET;
	else
		hints->ai_family = AF_INET6;
	hints->ai_socktype = SOCK_STREAM; 
	hints->ai_protocol = 6; 
	return;
}

int connect_to_server(const char *hostname, const char *port, short ai_family) {

	struct addrinfo hints;
	struct addrinfo *res, *rp;
	int sfd = 0;
	
	#ifdef NDEBUG
	fprintf(stderr, "libmail: Connecting to %s, port %s\n", hostname, port);
	#endif

	init_criteria(&hints, ai_family);
	if (getaddrinfo(hostname, port, &hints, &res) != 0)
		return LIBMAIL_DNSERROR;
	for (rp = res; rp != NULL; rp = rp->ai_next) {
		sfd = socket(rp->ai_family, rp->ai_socktype, rp->ai_protocol);
		if (sfd < 0)
			continue;
		if (connect(sfd, rp->ai_addr, rp->ai_addrlen) == 0) {
			break;
		}
		if (close(sfd) != 0) {
			freeaddrinfo(res);
			return LIBMAIL_SYSERROR;
		}
	}
	freeaddrinfo(res);
	return sfd;
}

int get_local_port(char *localport, int sfd) {

	struct sockaddr local;
	socklen_t length = sizeof(struct sockaddr);

	if (getsockname(sfd, &local, &length) != 0)
		return LIBMAIL_SYSERROR;
	if (getnameinfo(&local, length, NULL, 0, localport, NI_MAXSERV, NI_NUMERICSERV) != 0)
		return LIBMAIL_SYSERROR;
	#ifdef NDEBUG
	fprintf(stderr, "libmail: Connection's local port is: %s\n", localport);
	#endif
	return LIBMAIL_SUCCESS;
}
