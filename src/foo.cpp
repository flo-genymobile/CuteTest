#include "foo.h"

Foo::Foo(QObject *parent) : QObject(parent), FooInterface()
{
}

Foo::~Foo()
{
}

int Foo::substract(const int a, const int b)
{
    return a-b;
}

