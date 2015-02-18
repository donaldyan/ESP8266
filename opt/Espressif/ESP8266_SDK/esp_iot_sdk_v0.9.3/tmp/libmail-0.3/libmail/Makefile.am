lib_LTLIBRARIES = libmail.la
libmailincludedir = $(includedir)/libmail
libmail_la_LDFLAGS = -version-info 2:1:0
libmail_la_SOURCES = imap4.c mbox.c network.c pop3.c maildir.c error.c commons.c libmail.c
libmailinclude_HEADERS = imap4.h libmail.h mbox.h pop3.h maildir.h error.h
noinst_HEADERS = network.h commons.h libmail_intl.h

if LIBMAIL_USE_SASL
libmail_la_SOURCES += sasl.c
noinst_HEADERS += sasl.h
endif

if LIBMAIL_USE_APOP
libmail_la_SOURCES += md5sum.c
noinst_HEADERS += md5sum.h
endif

if LIBMAIL_USE_TLS
libmail_la_SOURCES += tls.c
noinst_HEADERS += tls.h
endif
