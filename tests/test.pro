include(../project.pri)

#add path to headers of GMOCK test framework
INCLUDEPATH += $$PWD/externals/gmock/include \
   $$PWD/externals/gmock/gtest/include \
   $$PWD/externals/gmock/gtest/internal

TEMPLATE = app

#add headers of main project
INCLUDEPATH += $$PWD/../include

#add headers of the tests 
INCLUDEPATH += $$PWD/include \
    $$PWD/include/mocks

TEMPLATE = app

QT += testlib 

DESTDIR = $$PWD/out/

OBJECTS_DIR = $$PWD/build/

MOC_DIR = $$OBJECTS_DIR

QMAKE_CLEAN += MOC_DIR/* \
    OBJECT_DIR/* \
    DESTDIR/*

SOURCES += src/testbla.cpp

HEADERS += include/testbla.h \
    include/mocks/blamock.h

LIBS += -L$$PWD/externals/gmock/lib -lgmock
