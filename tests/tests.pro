message(*** tests.pro ***)
include(tests-common.pri)

message(installdir set to $$INSTALLDIR)
message(destdir set to $$DESTDIR)

TEMPLATE = subdirs

SUBDIRS = test-lib/gmock \
    test-core

test-core.depends = test-lib/gmock

test.commands = $$INSTALLDIR/test-core -xml -o $$INSTALLDIR/results.xml

QMAKE_EXTRA_TARGETS += test

QMAKE_CLEAN += -r Makefile $$DESTDIR/* $$DESTDIR/lib/*
