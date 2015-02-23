message(*** project.pro ***)
include(project.pri)

DESTDIR = $$PWD/out
DEFAULT_INSTALLDIR = $$PWD/dist
isEmpty(INSTALLDIR) {
    INSTALLDIR = $$DEFAULT_INSTALLDIR
}

message(installdir set to $$INSTALLDIR)
message(destdir set to $$DESTDIR)

INCLUDEPATH += $$PWD/include/
 
TEMPLATE = app

QT += core widgets

TARGET = project

SOURCES += src/main.cpp

OBJECTS_DIR = $$PWD/build/
MOC_DIR = $$OBJECTS_DIR

QMAKE_CLEAN += -r OBJECTS_DIR/* DESTDIR/* Makefile

# make install
target.path = $$INSTALLDIR
INSTALLS += target
