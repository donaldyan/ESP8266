AC_INIT([libmail], [0.3], [http://sourceforge.net/tracker/?group_id=251539&atid=1126791])
AM_INIT_AUTOMAKE([libmail],[0.3])
AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_SRCDIR([libmail/network.c])
AC_CONFIG_HEADERS([config.h])
AC_PROG_CXX
AC_PROG_AWK
AC_PROG_CC
AC_PROG_CPP
AC_PROG_INSTALL
AC_PROG_LN_S
AC_PROG_MAKE_SET
AC_PROG_LIBTOOL

CFLAGS="-D_GNU_SOURCE -Wall -Wunused -Wstrict-prototypes"

use_sasl=false
use_apop=false
use_tls=false

AC_ARG_WITH([bufsize], AS_HELP_STRING([--with-bufsize=<integer>], [Specify buffer size in bytes for remote protocol command interaction, defaults to 512]),
	[
	if test -n "$withval"; then
		AC_DEFINE_UNQUOTED(LIBMAIL_USE_BUFSIZE, [$withval], [Buffer size in bytes for remote protocol command interaction])
		AC_MSG_RESULT($withval)
	else
		AC_MSG_ERROR([Buffer size must be an integer])
	fi
	],
	[
	AC_DEFINE(LIBMAIL_USE_BUFSIZE, [512], [Buffer size in bytes for remote protocol command interaction])
	]
)

AC_ARG_ENABLE([tls], AS_HELP_STRING([--enable-tls], [Enable TLS 1.0 and SSL 3.0]),
	[
	case "$enableval" in
	no)
	;;
	yes)
	AC_CHECK_LIB([gnutls], [gnutls_handshake],
	LDFLAGS="$LDFLAGS -lgnutls"
	AC_DEFINE(LIBMAIL_USE_TLS, [1], [Compile TLS code and link against gnutls])
	use_tls=true
	,
	AC_MSG_ERROR([gnutls is needed for TLS/SSL use])
	)
	;;
	*)
	AC_MSG_ERROR([Wrong value '$enableval'])
	;;
	esac
	]
)

AC_ARG_ENABLE([apop], AS_HELP_STRING([--enable-apop], [Enable APOP]),
	[
	case "$enableval" in
	no)
	;;
	yes)
	AC_DEFINE(LIBMAIL_USE_APOP, [1], [Use the POP3 APOP authentication mechanism])
	AC_TYPE_UINT32_T
	AC_TYPE_UINT8_T
	use_apop=true
	;;
	*)
	AC_MSG_ERROR([Wrong value '$enableval'])
	;;
	esac
	]
)

AC_ARG_ENABLE([sasl], AS_HELP_STRING([--enable-sasl], [Enable SASL]),
	[
	case "$enableval" in
	no)
	;;
	yes)
	AC_CHECK_LIB([sasl2],[sasl_client_init],
	LDFLAGS="$LDFLAGS -lsasl2"
	AC_DEFINE(LIBMAIL_USE_SASL, [1], [Compile SASL code and link against cyrus-sasl])
	use_sasl=true
	,
	AC_MSG_ERROR([cyrus-sasl2 is needed for authentication purposes])
	)
	;;
	*)
	AC_MSG_ERROR([Wrong value '$enableval'])
	;;
	esac
	]
)

AC_ARG_ENABLE([debug], AS_HELP_STRING([--enable-debug], [Enable debug]),
	[
	case "$enableval" in
	no)
	;;
	yes)
	AC_DEFINE(NDEBUG, [1], [Use debug functionality])
	CFLAGS="$CFLAGS -g"
	optimize="no"
	;;
	*)
	AC_MSG_ERROR([Wrong value '$enableval'])
	;;
	esac
	]
	,
	[
	optimize="yes"
	]
)
AC_ARG_ENABLE([profile], AS_HELP_STRING([--enable-profile], [Enable profiling]),
	[
	case "$enableval" in
	no)
	;;
	yes)
	AC_DEFINE(NDEBUG, [1], [Use debug functionality])
	CFLAGS="$CFLAGS -pg -g"
	optimize="yes"
	;;
	*)
	AC_MSG_ERROR([Wrong value '$enableval'])
	;;
	esac
	])
if test $optimize = "yes"; then
	CFLAGS="$CFLAGS -O2"
fi
AM_CONDITIONAL([LIBMAIL_USE_SASL], [test x$use_sasl = xtrue])
AM_CONDITIONAL([LIBMAIL_USE_APOP], [test x$use_apop = xtrue])
AM_CONDITIONAL([LIBMAIL_USE_TLS], [test x$use_tls = xtrue])
# Checks for header files.
AC_CHECK_HEADERS([arpa/inet.h limits.h netdb.h netinet/in.h stdint.h stdlib.h string.h strings.h sys/socket.h unistd.h])
# Checks for typedefs, structures, and compiler characteristics.
AC_TYPE_SIZE_T
# Checks for library functions.
AC_FUNC_MALLOC
AC_CHECK_FUNCS([memset socket strchr strdup strrchr strstr])
AC_CONFIG_FILES([libmail/Makefile Makefile man/Makefile])
AC_OUTPUT
