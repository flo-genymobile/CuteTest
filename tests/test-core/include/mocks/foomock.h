#ifndef FOOMOCK_H
#define FOOMOCK_H

#include "gmock/gmock.h"
#include "foointerface.h"

class FooMock : public FooInterface
{
    public:
        MOCK_METHOD2(substract, int(const int, const int));
        MOCK_METHOD0(superFooSignal, void());
};

#endif
