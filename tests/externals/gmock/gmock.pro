TEMPLATE = lib

CONFIG = static

DESTDIR = lib
TARGET = gmock

INCLUDEPATH += . include gtest gtest/include

SOURCES += gtest/src/gtest-all.cc src/gmock-all.cc

