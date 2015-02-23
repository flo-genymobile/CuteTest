message(***** gmock.pro *****)
include($$PWD/../../tests-common.pri)

DESTDIR = $$PWD/../../out/lib

TEMPLATE = lib

CONFIG = static

TARGET = gmock

INCLUDEPATH += . include gtest gtest/include

SOURCES += gtest/src/gtest-all.cc src/gmock-all.cc

OBJECTS_DIR = $$PWD/build/ 

QMAKE_CLEAN += lib/* $$OBJECTS_DIR/* 
