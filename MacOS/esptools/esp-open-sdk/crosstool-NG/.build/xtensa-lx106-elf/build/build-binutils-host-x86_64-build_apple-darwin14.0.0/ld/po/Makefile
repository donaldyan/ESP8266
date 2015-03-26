# Makefile for program source directory in GNU NLS utilities package.
# Copyright (C) 1995, 1996, 1997 by Ulrich Drepper <drepper@gnu.ai.mit.edu>
# Copyright 2003, 2006, 2007, 2009 Free Software Foundation, Inc.
#
# This file may be copied and used freely without restrictions.  It can
# be used in projects which are not available under the GNU Public License
# but which still want to provide support for the GNU gettext functionality.
# Please note that the actual code is *not* freely available.

PACKAGE = ld
VERSION = 2.24

SHELL = /bin/sh


srcdir = /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/ld/po
top_srcdir = /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/ld
VPATH = /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/ld/po
top_builddir = ..

prefix = /esptools/esp-open-sdk/xtensa-lx106-elf
exec_prefix = ${prefix}
datadir = $(prefix)/
localedir = $(datadir)/locale
gnulocaledir = $(prefix)/share/locale
gettextsrcdir = $(prefix)/share/gettext/po
subdir = po

DESTDIR =

INSTALL = /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/tools/bin/install -c
INSTALL_DATA = /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/tools/bin/install -c -m 644
MKINSTALLDIRS = /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/ld/../mkinstalldirs

CC = x86_64-build_apple-darwin14.0.0-gcc
GENCAT = 
GMSGFMT = PATH=../src:$$PATH /opt/local/bin/msgfmt
MSGFMT = /opt/local/bin/msgfmt
XGETTEXT = PATH=../src:$$PATH /opt/local/bin/xgettext
MSGMERGE = PATH=../src:$$PATH msgmerge

DEFS = -DHAVE_CONFIG_H
CFLAGS = -O2 -g -pipe 
CPPFLAGS = 

INCLUDES = -I.. -I$(top_srcdir)/intl

COMPILE = $(CC) -c $(DEFS) $(INCLUDES) $(CPPFLAGS) $(CFLAGS) $(XCFLAGS)

SOURCES = cat-id-tbl.c
POFILES =  $(srcdir)/fr.po $(srcdir)/sv.po $(srcdir)/tr.po $(srcdir)/es.po $(srcdir)/da.po $(srcdir)/vi.po $(srcdir)/zh_CN.po $(srcdir)/zh_TW.po $(srcdir)/ga.po $(srcdir)/fi.po $(srcdir)/id.po $(srcdir)/bg.po $(srcdir)/it.po $(srcdir)/uk.po
GMOFILES =  $(srcdir)/fr.gmo $(srcdir)/sv.gmo $(srcdir)/tr.gmo $(srcdir)/es.gmo $(srcdir)/da.gmo $(srcdir)/vi.gmo $(srcdir)/zh_CN.gmo $(srcdir)/zh_TW.gmo $(srcdir)/ga.gmo $(srcdir)/fi.gmo $(srcdir)/id.gmo $(srcdir)/bg.gmo $(srcdir)/it.gmo $(srcdir)/uk.gmo
DISTFILES = ChangeLog Makefile.in.in POTFILES.in $(PACKAGE).pot \
stamp-cat-id $(POFILES) $(GMOFILES) $(SOURCES)

POTFILES = \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/ld/deffile.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/ld/elf-hints-local.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/ld/emultempl/armcoff.em \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/ld/emultempl/pe.em \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/ld/ld.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/ld/ldcref.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/ld/ldctor.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/ld/ldctor.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/ld/ldemul.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/ld/ldemul.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/ld/ldexp.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/ld/ldexp.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/ld/ldfile.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/ld/ldfile.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/ld/ldlang.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/ld/ldlang.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/ld/ldlex-wrapper.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/ld/ldlex.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/ld/ldmain.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/ld/ldmain.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/ld/ldmisc.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/ld/ldmisc.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/ld/ldver.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/ld/ldver.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/ld/ldwrite.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/ld/ldwrite.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/ld/lexsup.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/ld/mri.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/ld/mri.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/ld/pe-dll.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/ld/pe-dll.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/ld/pep-dll.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/ld/pep-dll.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/ld/plugin.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/ld/plugin.h

CATALOGS = 
CATOBJEXT = 
INSTOBJEXT = 

.SUFFIXES:
.SUFFIXES: .c .o .po .pox .gmo .mo .msg .cat

.c.o:
	$(COMPILE) $<

.po.pox:
	$(MAKE) $(PACKAGE).pot
	$(MSGMERGE) $< $(srcdir)/$(PACKAGE).pot -o $*.pox

.po.mo:
	$(MSGFMT) -o $@ $<

.po.gmo:
	file=`echo $* | sed 's,.*/,,'`.gmo \
	  && rm -f $$file && $(GMSGFMT) -o $$file $<

.po.cat:
	sed -f ../intl/po2msg.sed < $< > $*.msg \
	  && rm -f $@ && $(GENCAT) $@ $*.msg


all: all-no

all-yes: $(CATALOGS) # $(PACKAGE).pot
all-no:

$(srcdir)/$(PACKAGE).pot: $(POTFILES)
	$(XGETTEXT) --default-domain=$(PACKAGE) --directory=$(top_srcdir) \
	  --add-comments -C --keyword=_ --keyword=N_ \
	  --msgid-bugs-address=bug-binutils@gnu.org \
	  --files-from=$(srcdir)/POTFILES.in
	rm -f $(srcdir)/$(PACKAGE).pot
	mv $(PACKAGE).po $(srcdir)/$(PACKAGE).pot

$(srcdir)/cat-id-tbl.c: stamp-cat-id; @:
$(srcdir)/stamp-cat-id: $(PACKAGE).pot
	rm -f cat-id-tbl.tmp
	sed -f ../intl/po2tbl.sed $(srcdir)/$(PACKAGE).pot \
		| sed -e "s/@PACKAGE NAME@/$(PACKAGE)/" > cat-id-tbl.tmp
	if cmp -s cat-id-tbl.tmp $(srcdir)/cat-id-tbl.c; then \
	  rm cat-id-tbl.tmp; \
	else \
	  echo cat-id-tbl.c changed; \
	  rm -f $(srcdir)/cat-id-tbl.c; \
	  mv cat-id-tbl.tmp $(srcdir)/cat-id-tbl.c; \
	fi
	cd $(srcdir) && rm -f stamp-cat-id && echo timestamp > stamp-cat-id


install: install-exec install-data
install-exec:
install-info:
install-html:
install-pdf:
install-data: install-data-no
install-data-no: all
install-data-yes: all
	if test -r $(MKINSTALLDIRS); then \
	  $(MKINSTALLDIRS) $(DESTDIR)$(datadir); \
	else \
	  $(top_srcdir)/mkinstalldirs $(DESTDIR)$(datadir); \
	fi
	@catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  case "$$cat" in \
	    *.gmo) destdir=$(gnulocaledir);; \
	    *)     destdir=$(localedir);; \
	  esac; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  dir=$(DESTDIR)$$destdir/$$lang/LC_MESSAGES; \
	  if test -r $(MKINSTALLDIRS); then \
	    $(MKINSTALLDIRS) $$dir; \
	  else \
	    $(top_srcdir)/mkinstalldirs $$dir; \
	  fi; \
	  if test -r $$cat; then \
	    $(INSTALL_DATA) $$cat $$dir/$(PACKAGE)$(INSTOBJEXT); \
	    echo "installing $$cat as $$dir/$(PACKAGE)$(INSTOBJEXT)"; \
	  else \
	    $(INSTALL_DATA) $(srcdir)/$$cat $$dir/$(PACKAGE)$(INSTOBJEXT); \
	    echo "installing $(srcdir)/$$cat as" \
		 "$$dir/$(PACKAGE)$(INSTOBJEXT)"; \
	  fi; \
	  if test -r $$cat.m; then \
	    $(INSTALL_DATA) $$cat.m $$dir/$(PACKAGE)$(INSTOBJEXT).m; \
	    echo "installing $$cat.m as $$dir/$(PACKAGE)$(INSTOBJEXT).m"; \
	  else \
	    if test -r $(srcdir)/$$cat.m ; then \
	      $(INSTALL_DATA) $(srcdir)/$$cat.m \
		$$dir/$(PACKAGE)$(INSTOBJEXT).m; \
	      echo "installing $(srcdir)/$$cat as" \
		   "$$dir/$(PACKAGE)$(INSTOBJEXT).m"; \
	    else \
	      true; \
	    fi; \
	  fi; \
	done
	if test "$(PACKAGE)" = "gettext"; then \
	  if test -r $(MKINSTALLDIRS); then \
	    $(MKINSTALLDIRS) $(DESTDIR)$(gettextsrcdir); \
	  else \
	    $(top_srcdir)/mkinstalldirs $(DESTDIR)$(gettextsrcdir); \
	  fi; \
	  $(INSTALL_DATA) $(srcdir)/Makefile.in.in \
			  $(DESTDIR)$(gettextsrcdir)/Makefile.in.in; \
	else \
	  : ; \
	fi

# Define this as empty until I found a useful application.
installcheck:

uninstall:
	catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  rm -f $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT); \
	  rm -f $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT).m; \
	  rm -f $(DESTDIR)$(gnulocaledir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT); \
	  rm -f $(DESTDIR)$(gnulocaledir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT).m; \
	done
	rm -f $(DESTDIR)$(gettextsrcdir)/po-Makefile.in.in

check: all

cat-id-tbl.o: ../intl/libgettext.h

html dvi pdf ps info tags TAGS ID:

mostlyclean:
	rm -f core core.* *.pox $(PACKAGE).po *.old.po cat-id-tbl.tmp
	rm -fr *.o

clean: mostlyclean

distclean: clean
	rm -f Makefile Makefile.in POTFILES *.mo *.msg *.cat *.cat.m

maintainer-clean: distclean
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."
	rm -f $(GMOFILES)

distdir = ../$(PACKAGE)-$(VERSION)/$(subdir)
dist distdir: update-po $(DISTFILES)
	dists="$(DISTFILES)"; \
	for file in $$dists; do \
	  ln $(srcdir)/$$file $(distdir) 2> /dev/null \
	    || cp -p $(srcdir)/$$file $(distdir); \
	done

update-po: Makefile
	$(MAKE) $(PACKAGE).pot
	PATH=`pwd`/../src:$$PATH; \
	cd $(srcdir); \
	catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  mv $$lang.po $$lang.old.po; \
	  echo "$$lang:"; \
	  if $(MSGMERGE) $$lang.old.po $(PACKAGE).pot -o $$lang.po; then \
	    rm -f $$lang.old.po; \
	  else \
	    echo "msgmerge for $$cat failed!"; \
	    rm -f $$lang.po; \
	    mv $$lang.old.po $$lang.po; \
	  fi; \
	done

POTFILES: POTFILES.in
	( if test 'x$(srcdir)' != 'x.'; then \
	    posrcprefix='$(top_srcdir)/'; \
	  else \
	    posrcprefix="../"; \
	  fi; \
	  rm -f $@-t $@ \
	    && (sed -e '/^#/d' -e '/^[ 	]*$$/d' \
		    -e "s@.*@	$$posrcprefix& \\\\@" < $(srcdir)/$@.in \
		| sed -e '$$s/\\$$//') > $@-t \
	    && chmod a-w $@-t \
	    && mv $@-t $@ )

POTFILES.in: # ../Makefile
	cd .. && $(MAKE) po/POTFILES.in

Makefile: Make-in ../config.status POTFILES
	cd .. \
	  && CONFIG_FILES=$(subdir)/Makefile.in:$(subdir)/Make-in \
	     CONFIG_HEADERS= $(SHELL) ./config.status

# Tell versions [3.59,3.63) of GNU make not to export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
