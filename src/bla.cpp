#include "bla.h"

Bla::Bla(QObject *parent) : QObject(parent)
{}

Bla::~Bla()
{}

int Bla::sumUp(const int leftOp, const int rightOp) 
{
	int result = leftOp + rightOp;
	return result;
}

