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

void test_FUN2_ReturnViaReference_inject_via_pointer(void){

    uint8_t num1 = 1;
    uint8_t num2 = 2;
    uint8_t func2_result = 3;


    FUN2_AddAndReturnViaReference_ExpectAnyArgs();
    FUN2_AddAndReturnViaReference_ReturnThruPtr_result(&func2_result);

    uint8_t result = FUN1_add(num1, num2);

    TEST_ASSERT_EQUAL(3, result);

}