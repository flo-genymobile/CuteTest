#ifndef TESTFOO_H
#define TESTFOO_H

#include <QtTest/QtTest>
#include "autotest.h"

class TestFoo : public QObject
{
    Q_OBJECT

    private slots:
        void substractShouldReturnCorrectValue();
};

DECLARE_TEST(TestFoo)

#endif
