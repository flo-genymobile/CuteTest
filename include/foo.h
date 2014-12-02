#ifndef FOO_H
#define FOO_H

#include <QtCore/QObject>

#include "foointerface.h"

class Foo : public QObject, public FooInterface
{
    Q_OBJECT

    Q_INTERFACES(FooInterface)

    public:
        Foo(QObject *parent = 0);
        ~Foo();
        int substract(int a, int b);
    
    signals:
        void superFooSignal();
};

#endif
