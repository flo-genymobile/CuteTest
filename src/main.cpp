#include <QApplication>
#include "bla.h"
#include "foo.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	Bla bla;
	bla.sumUp(2,2);

    Foo foo;
    foo.substract(100, 50);
	return 0;
}
