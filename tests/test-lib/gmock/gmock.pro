TEMPLATE = lib

CONFIG = static

DESTDIR = lib
TARGET = gmock

INCLUDEPATH += . include gtest gtest/include

SOURCES += gtest/src/gtest-all.cc src/gmock-all.cc

OBJECTS_DIR = $$PWD/build/ 

QMAKE_CLEAN += lib/* \
    $$OBJECTS_DIR/* 

