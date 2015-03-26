# Makefile for program source directory in GNU NLS utilities package.
# Copyright (C) 1995, 1996, 1997 by Ulrich Drepper <drepper@gnu.ai.mit.edu>
# Copyright 2003, 2006, 2007, 2009 Free Software Foundation, Inc.
#
# This file may be copied and used freely without restrictions.  It can
# be used in projects which are not available under the GNU Public License
# but which still want to provide support for the GNU gettext functionality.
# Please note that the actual code is *not* freely available.

PACKAGE = gas
VERSION = 2.24

SHELL = /bin/sh


srcdir = /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/po
top_srcdir = /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas
VPATH = /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/po
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
MKINSTALLDIRS = /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/../mkinstalldirs

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
POFILES =  $(srcdir)/fr.po $(srcdir)/tr.po $(srcdir)/es.po $(srcdir)/rw.po $(srcdir)/id.po $(srcdir)/ru.po $(srcdir)/fi.po $(srcdir)/ja.po
GMOFILES =  $(srcdir)/fr.gmo $(srcdir)/tr.gmo $(srcdir)/es.gmo $(srcdir)/rw.gmo $(srcdir)/id.gmo $(srcdir)/ru.gmo $(srcdir)/fi.gmo $(srcdir)/ja.gmo
DISTFILES = ChangeLog Makefile.in.in POTFILES.in $(PACKAGE).pot \
stamp-cat-id $(POFILES) $(GMOFILES) $(SOURCES)

POTFILES = \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/app.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/as.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/as.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/asintl.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/atof-generic.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/bignum.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/bit_fix.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/cgen.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/cgen.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/compress-debug.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/compress-debug.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/cond.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/atof-ieee.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/atof-vax.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/e-crisaout.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/e-criself.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/e-i386aout.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/e-i386coff.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/e-i386elf.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/e-mipself.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/obj-aout.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/obj-aout.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/obj-coff.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/obj-coff.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/obj-ecoff.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/obj-ecoff.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/obj-elf.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/obj-elf.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/obj-evax.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/obj-evax.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/obj-fdpicelf.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/obj-fdpicelf.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/obj-macho.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/obj-macho.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/obj-multi.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/obj-multi.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/obj-som.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/obj-som.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-aarch64.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-aarch64.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-alpha.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-alpha.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-arc.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-arc.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-arm.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-arm.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-avr.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-avr.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-bfin.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-bfin.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-cr16.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-cr16.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-cris.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-cris.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-crx.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-crx.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-d10v.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-d10v.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-d30v.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-d30v.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-dlx.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-dlx.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-epiphany.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-epiphany.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-fr30.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-fr30.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-frv.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-frv.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-h8300.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-h8300.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-hppa.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-hppa.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-i370.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-i370.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-i386.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-i386.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-i860.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-i860.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-i960.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-i960.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-ia64.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-ia64.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-ip2k.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-ip2k.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-iq2000.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-iq2000.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-lm32.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-lm32.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-m32c.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-m32c.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-m32r.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-m32r.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-m68hc11.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-m68hc11.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-m68k.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-m68k.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-mcore.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-mcore.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-mep.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-mep.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-metag.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-metag.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-microblaze.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-microblaze.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-mips.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-mips.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-mmix.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-mmix.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-mn10200.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-mn10200.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-mn10300.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-mn10300.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-moxie.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-msp430.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-msp430.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-mt.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-mt.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-nios2.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-nios2.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-ns32k.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-ns32k.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-openrisc.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-openrisc.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-or32.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-or32.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-pdp11.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-pdp11.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-pj.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-pj.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-ppc.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-ppc.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-rl78.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-rl78.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-rx.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-rx.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-s390.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-s390.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-score.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-score.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-sh.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-sh.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-sh64.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-sh64.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-sparc.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-sparc.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-spu.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-spu.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-tic30.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-tic30.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-tic4x.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-tic4x.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-tic54x.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-tic54x.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-tic6x.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-tic6x.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-tilegx.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-tilegx.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-tilepro.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-tilepro.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-v850.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-v850.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-vax.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-vax.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-xc16x.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-xc16x.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-xgate.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-xgate.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-xstormy16.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-xstormy16.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-xtensa.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-xtensa.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-z80.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-z80.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-z8k.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/tc-z8k.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/te-386bsd.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/te-aix5.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/te-armeabi.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/te-armlinuxeabi.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/te-dynix.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/te-epoc-pe.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/te-freebsd.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/te-generic.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/te-gnu.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/te-go32.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/te-hppa.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/te-hppa64.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/te-hppalinux64.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/te-i386aix.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/te-ia64aix.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/te-interix.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/te-lynx.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/te-mach.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/te-macos.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/te-nbsd.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/te-nbsd532.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/te-netware.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/te-pc532mach.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/te-pe.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/te-psos.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/te-riscix.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/te-solaris.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/te-sparcaout.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/te-sun3.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/te-svr4.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/te-symbian.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/te-tmips.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/te-vms.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/te-vxworks.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/te-wince-pe.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/xtensa-relax.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/config/xtensa-relax.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/depend.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/dw2gencfi.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/dw2gencfi.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/dwarf2dbg.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/dwarf2dbg.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/ecoff.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/ecoff.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/ehopt.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/emul-target.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/emul.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/expr.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/expr.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/flonum-copy.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/flonum-konst.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/flonum-mult.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/flonum.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/frags.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/frags.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/hash.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/hash.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/input-file.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/input-file.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/input-scrub.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/itbl-lex.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/itbl-ops.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/itbl-ops.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/listing.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/listing.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/literal.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/macro.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/macro.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/messages.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/obj.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/output-file.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/output-file.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/read.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/read.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/remap.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/sb.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/sb.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/stabs.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/struc-symbol.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/subsegs.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/subsegs.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/symbols.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/symbols.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/tc.h \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/write.c \
     /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/binutils-2.24/gas/write.h

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
	  --add-comments --keyword=_ --keyword=N_ \
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
