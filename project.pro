include(project.pri)

INCLUDEPATH += $$PWD/include/
 
TEMPLATE = app

QT += core widgets

TARGET = project

DESTDIR = $$PWD/out/

OBJECTS_DIR = $$PWD/build/

MOC_DIR = $$OBJECTS_DIR

QMAKE_CLEAN += MOC_DIR/* \
    OBJECT_DIR/* \
    DESTDIR/* 

SOURCES += src/main.cpp

