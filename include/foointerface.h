#ifndef FOOINTERFACE_H
#define FOOINTERFACE_H

#define FooInterfaceTag "FooInterface"

#include <QtPlugin>

class FooInterface 
{
    public:
        virtual ~FooInterface() {}
        virtual int substract(const int a, const int b) = 0;
    
    signals:
        virtual void superFooSignal() = 0;
};

Q_DECLARE_INTERFACE(FooInterface, "FooInterface");

#endif
