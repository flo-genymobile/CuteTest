#ifndef BLA_H
#define BLA_H

#include <QObject>
#include "blainterface.h"

class Bla : public QObject, public BlaInterface
{
	Q_OBJECT

	public:
		explicit Bla(QObject *parent = 0);
		~Bla();
		int sumUp(const int leftOp, const int rightOp);
};

#endif
