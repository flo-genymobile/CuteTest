#include "testfoo.h"
#include "foo.h"
#include "mocks/foomock.h"

using testing::Return;
using testing::_;

void TestFoo::substractShouldReturnCorrectValue() 
{
    FooMock foo;
    
    ON_CALL(foo, substract(_,_))
        .WillByDefault(Return(60));
    
    int result = foo.substract(100, 50);
    QVERIFY(result == 50);
}

