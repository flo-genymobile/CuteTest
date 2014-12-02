include(../../project.pri)

#add path to headers of GMOCK test framework
INCLUDEPATH += $$PWD/../test-lib/gmock/include \
   $$PWD/../test-lib/gmock/gtest/include \
   $$PWD/../test-lib/gmock/gtest/internal

#add headers of main project
INCLUDEPATH += $$PWD/../../include

#add headers of the tests 
INCLUDEPATH += $$PWD/include \
    $$PWD/include/mocks

TARGET = test-core

TEMPLATE = app

QT += testlib 

DESTDIR = $$PWD/out/

OBJECTS_DIR = $$PWD/build/

MOC_DIR = $$OBJECTS_DIR

QMAKE_CLEAN += $$MOC_DIR/* \
    $$OBJECTS_DIR/* \
    $$DESTDIR/*

SOURCES += src/testbla.cpp \
    src/testfoo.cpp \
    src/main.cpp

HEADERS += include/testbla.h \
    include/testfoo.h \
    include/mocks/blamock.h \
    include/mocks/foomock.h
    include/autotest.h

LIBS += -L$$PWD/../test-lib/gmock/lib -lgmock
