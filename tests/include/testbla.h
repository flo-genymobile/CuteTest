#ifndef TESTBLA_H
#define TESTBLA_H

#include <QtTest/QtTest>

class TestBla : public QObject
{
	Q_OBJECT
	private slots:
		void sumUpShouldReturnCorrectValue();
};

#endif
