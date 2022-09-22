#include "unity.h"
#include "function1.h"
#include "mock_function2.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_FUN1_doFirstThing_Should_DoSecondThingIfConditionIsTrue(void)
{   
    FUN1_setCondition(1);
    FUN2_doSecondThing_Expect();
    
    FUN1_doFirstThing();

}

void test_FUN1_doFirstThing_Should_NotDoSecondThingIfConditionIsFalse(void)
{   
    FUN1_setCondition(0);

    FUN1_doFirstThing();

}

void test_FUN1_staticFunctionTest_Should_ReturnOneAndNotExpectFUN3Calls(void)
{   

    FUN2_returnOne_ExpectAndReturn(1);

    TEST_ASSERT_EQUAL(1,FUN1_staticFunctionTest());

}