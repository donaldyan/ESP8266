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

#ifdef LIBMAIL_USE_TLS

#include <libmail/libmail.h>
#include <libmail/error.h>
#include <gnutls/gnutls.h>
#include <errno.h>
#include <stdio.h>

#include <string.h>

int initialize_tls(libmail_remote_server_t *server) {
	
	gnutls_certificate_credentials_t cred;
	
	int ret;
	const int cert[] = { GNUTLS_CRT_X509, 0 };

	if ((ret = gnutls_certificate_allocate_credentials(&cred)) != 0)
		goto error; 
	if ((ret = gnutls_init (&server->tls_session, GNUTLS_CLIENT)) != 0)
		goto error;
	if ((ret = gnutls_set_default_priority(server->tls_session)) != 0)
		goto error;
	if ((ret = gnutls_certificate_type_set_priority(server->tls_session, cert)) != 0)
		goto error;
	if ((ret = gnutls_credentials_set(server->tls_session, GNUTLS_CRD_CERTIFICATE, cred)) != 0)
		goto error; 
	gnutls_transport_set_ptr (server->tls_session, (gnutls_transport_ptr_t) server->sfd);
	if ((ret = gnutls_handshake (server->tls_session)) != 0)
		goto error;
	return LIBMAIL_SUCCESS;

error: gnutls_perror(ret);
	return LIBMAIL_TLSERROR;
}

int discard_tls(libmail_remote_server_t *server) {

	gnutls_deinit (server->tls_session);

	return LIBMAIL_SUCCESS;
}

#endif
