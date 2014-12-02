#ifndef TESTBLA_H
#define TESTBLA_H

#include <QtTest/QtTest>
#include "autotest.h"

class TestBla : public QObject
{
	Q_OBJECT
	private slots:
		void sumUpShouldReturnCorrectValue();
};

DECLARE_TEST(TestBla)

#endif
