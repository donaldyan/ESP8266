VPATH = /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gdb-7.5.1/gdb/testsuite/gdb.multi
srcdir = /Volumes/ESPTools/esp-open-sdk/crosstool-NG/.build/src/gdb-7.5.1/gdb/testsuite/gdb.multi

EXECUTABLES = hello hangout goodbye bkpt-multi-exec crashme

all info install-info dvi install uninstall installcheck check:
	@echo "Nothing to be done for $@..."

clean mostlyclean:
	-rm -f *~ *.o *.ci
	-rm -f *.dwo *.dwp
	-rm -f core $(EXECUTABLES)

distclean maintainer-clean realclean: clean
	-rm -f Makefile config.status config.log gdb.log gdb.sum
