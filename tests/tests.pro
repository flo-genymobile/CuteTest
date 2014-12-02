TEMPLATE = subdirs

SUBDIRS = test-lib/gmock \
    test-core

test-core.depends = test-lib/gmock

test.commands = $$PWD/test-core/out/test-core -xml -o $$PWD/out/results.xml

QMAKE_EXTRA_TARGET += test
