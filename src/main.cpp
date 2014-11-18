#include <QApplication>
#include "bla.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	Bla foo;
	foo.sumUp(2,2);
	return 0;
}
