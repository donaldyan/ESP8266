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

#ifdef LIBMAIL_USE_SASL

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <netdb.h>
#include <sasl/sasl.h>
#include <sasl/saslutil.h>
#include <assert.h>

#include <config.h>
#include <libmail/libmail.h>
#include <libmail/network.h>
#include <libmail/sasl.h>
#include <libmail/error.h>
#include <libmail/commons.h>

static int get_user(void *context, int id, const char **result, unsigned *len) {

	if (id != SASL_CB_USER && id != SASL_CB_AUTHNAME) {
		#ifdef NDEBUG
		fprintf(stderr, "libmail: SASL Callback id: 0x%X\n", id);
		#endif
		return SASL_FAIL;
	}

	#ifdef NDEBUG
	fprintf(stderr, "libmail: SASL Callback: sasl requested for username\n");
	#endif

	char *username = (char *) context;

	*result = username;

	if (len)
		*len = (username)? strlen(username): 0;

	#ifdef NDEBUG
	fprintf(stderr, "libmail: Username: %s filled\n", *result);
	#endif

	return SASL_OK;
}

static int get_secret(sasl_conn_t *conn, void *context, int id, sasl_secret_t **psecret) {
    unsigned len;

	char *password = (char *) context;    
    
	if (! conn || ! psecret || id != SASL_CB_PASS)
        return SASL_BADPARAM;

    len = (unsigned) strlen(password);

    *psecret = (sasl_secret_t *) malloc(sizeof(sasl_secret_t) + len);

    (*psecret)->len = len;
    strcpy((char *)(*psecret)->data, password);

    return SASL_OK;
}

static int get_canon_user(sasl_conn_t *conn, void *context, const char *user, unsigned ulen,
                      unsigned flags, const char *user_realm, char *out_user, unsigned out_umax,
                      unsigned *out_ulen)

{
    strcpy(out_user, user);
    *out_ulen = (unsigned) strlen(out_user);
    return SASL_OK;
}

static int sasl_my_log(void *context __attribute__((unused)), int priority, const char *message)
{
	#ifdef NDEBUG
	const char *label;

  	if (! message)
    	return SASL_BADPARAM;

  	switch (priority) {
  		case SASL_LOG_ERR:
    		label = "Error";
    		break;
  		case SASL_LOG_NOTE:
    		label = "Info";
    		break;
  		default:
    		label = "Other";
    		break;
  	}

  	fprintf(stderr, "libmail: SASL %s: %s\n", label, message);
	#endif
  	return SASL_OK;
}

static int initialize_sasl(const char *hostname, const char *port, int sfd, const char *service, sasl_conn_t **pconn, sasl_callback_t *callbacks) {

	char localport[NI_MAXSERV+1];

	if (sasl_client_init(callbacks) != SASL_OK)
		return LIBMAIL_SASL_ERROR;
	if (get_local_port(localport, sfd) != LIBMAIL_SUCCESS)
		return LIBMAIL_SYSERROR;
	if (sasl_client_new(service, hostname, localport, port, callbacks, 0, pconn) != SASL_OK)
		return LIBMAIL_SASL_ERROR; 

	return LIBMAIL_SUCCESS;
} 

static int start_sasl(sasl_callback_t *callbacks, const char *mechlist, sasl_conn_t *pconn, char *out, unsigned *outlen, const char **mechusing) {
	
	int result;
	const char *rawout;
	unsigned rawoutlen;

	#ifdef NDEBUG
	fprintf(stderr, "libmail: SASL mechanisms: %s\n", mechlist);	
	#endif
	if ((result = sasl_client_start(pconn, mechlist, NULL, &rawout, &rawoutlen, mechusing)) != SASL_CONTINUE) {
		if (result == SASL_INTERACT) {
			#ifdef NDEBUG
			fprintf(stderr, "libmail: SASL_INTERACT, should have never come to this\n");
			#endif
		}   
		else {
			#ifdef NDEBUG
			printf("%s\n", sasl_errdetail(pconn));
			#endif
		}   
		return LIBMAIL_SASL_ERROR;  
	}
	if (rawoutlen != 0) {
		#ifdef NDEBUG
		fprintf(stderr, "libmail: Initial SASL data: %s\n", rawout);
		#endif
		if (sasl_encode64(rawout, rawoutlen, out, 1024, outlen) != SASL_OK)
			return LIBMAIL_SASL_ERROR;
	} else {
		*outlen = 0;
	}
	return LIBMAIL_SUCCESS;
}

static int next_sasl_step(sasl_callback_t *callbacks, sasl_conn_t *pconn, const char *in, unsigned inlen, char *out, unsigned *outlen ) {

	char decoded_out[1024];
	unsigned decoded_outlen, encoded_outlen;
	int result;
	const char *encoded_out;

	#ifdef NDEBUG
	fprintf(stderr, "libmail: base64 input: %s, length: %d\n", in, inlen);
	#endif
	if (sasl_decode64(in, inlen, decoded_out, 1024, &decoded_outlen) != SASL_OK)
		return LIBMAIL_SASL_ERROR;
	result = sasl_client_step(pconn, decoded_out, decoded_outlen, NULL, &encoded_out, &encoded_outlen);
	switch (result) {
		case SASL_OK:
			if (encoded_outlen != 0)
				if (sasl_encode64(encoded_out, encoded_outlen, out, 1024, outlen) != SASL_OK)
					return LIBMAIL_SASL_ERROR;
			return LIBMAIL_SUCCESS;
		case SASL_CONTINUE:
			if (sasl_encode64(encoded_out, encoded_outlen, out, 1024, outlen) != SASL_OK)
				return LIBMAIL_SASL_ERROR;
			return LIBMAIL_CONTINUE;
		default:
			#ifdef NDEBUG
			fprintf(stderr, "libmail: SASL error: %s\n", sasl_errdetail(pconn));
			#endif
			return LIBMAIL_SASL_ERROR;
	}
}

static int sasl_command_success(const char *buffer) {
	
	if (*buffer == '+')
		return LIBMAIL_SUCCESS;
	else
		return LIBMAIL_SASL_ERROR;
}

void discard_sasl(libmail_auth_t *auth)
{
	sasl_dispose(&auth->sasl_session);
	// TODO work-around for cyrus-sasl bug (?) about nonce changed
	sasl_done();
}

int sasl_authenticate(const char *service, const char *mechlist, int maxbuf, char *rcv_buffer, libmail_remote_server_t *server, libmail_auth_t *auth, const char *auth_command) 
{
	char snd_buffer[maxbuf+1];

	int result;
	char out[maxbuf+1];
	const char *mechusing;
	unsigned outlen;
	int n_print;
	char *ptr;
   	int n_read;

	sasl_callback_t callbacks[] = { 
        { SASL_CB_USER, &get_user, auth->username },  
        { SASL_CB_PASS, &get_secret, auth->password },
        { SASL_CB_AUTHNAME, &get_user, auth->username },
        { SASL_CB_CANON_USER, &get_canon_user, NULL },
        { SASL_CB_LOG, &sasl_my_log, NULL },
        { SASL_CB_LIST_END, NULL, NULL }
    };  
	
	if ((result = initialize_sasl(server->hostname, server->port, server->sfd, service, &auth->sasl_session, callbacks)) != LIBMAIL_SUCCESS)
		return result;
	
	sasl_security_properties_t secprops;
	memset (&secprops, 0, sizeof (secprops));

	secprops.max_ssf = 256;

    sasl_setprop(auth->sasl_session, SASL_SEC_PROPS, &secprops);

	if (start_sasl(callbacks, mechlist, auth->sasl_session, out, &outlen, &mechusing) != LIBMAIL_SUCCESS)
		return LIBMAIL_SASL_ERROR;

	n_print = snprintf(snd_buffer, maxbuf+1, "%s %s\r\n", auth_command, mechusing);
	assert(n_print >= maxbuf+1 || n_print < 0);

	if (send_command(snd_buffer, n_print, server) != 0)
		return LIBMAIL_SYSERROR;
	
	if (read_response(rcv_buffer, &n_read, maxbuf, server) != LIBMAIL_SUCCESS)
		return LIBMAIL_SYSERROR;
	if (sasl_command_success(rcv_buffer) != LIBMAIL_SUCCESS)
		return LIBMAIL_SASL_ERROR;
	
	do {
		if (outlen != 0) {
			n_print = snprintf(snd_buffer, maxbuf+1, "%s\r\n", out);
			assert(n_print >= maxbuf+1 || n_print < 0);
			if (send_command(snd_buffer, n_print, server) != 0)
				return LIBMAIL_SYSERROR;
			if (read_response(rcv_buffer, NULL, maxbuf, server) != LIBMAIL_SUCCESS)
				return LIBMAIL_SYSERROR;
			if (sasl_command_success(rcv_buffer) != LIBMAIL_SUCCESS)
				return LIBMAIL_SASL_ERROR;
		}
		ptr = rcv_buffer + 2;
		ptr = strrchr(ptr, '\r');
		*ptr = '\0';
		ptr = rcv_buffer + 2;
	} while ((result = next_sasl_step(callbacks, auth->sasl_session, ptr, strlen(ptr), out, &outlen)) == LIBMAIL_CONTINUE);

	if (outlen != 0) {
		n_print = snprintf(snd_buffer, maxbuf+1, "%s\r\n", out);
		assert(n_print >= maxbuf+1 || n_print < 0);
		if (send_command(snd_buffer, n_print, server) != 0)
			return LIBMAIL_SYSERROR;
	}
	
	return result;
}

#endif
