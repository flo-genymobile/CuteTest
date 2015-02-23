#include "testbla.h"
#include "bla.h"
#include "mocks/blamock.h"

using testing::Return;
using testing::_;

void TestBla::sumUpShouldReturnCorrectValue() 
{
	BlaMock foo;
    
    ON_CALL(foo, sumUp(_,_))
        .WillByDefault(Return(8));   
    
	int result = foo.sumUp(2, 2);
	QVERIFY(result == 8);
}


