#ifndef BLAMOCK_H
#define BLAMOCK_H

#include "gmock/gmock.h"
#include "blainterface.h"

class BlaMock : public BlaInterface
{
    public:
        MOCK_METHOD2(sumUp, int(const int, const int));
};

#endif
