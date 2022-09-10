#include "unity.h"
#include "function1.h"
#include "mock_function2.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_doFirstThing_Should_DoSecondThingIfConditionIsTrue(void)
{   
    setCondition(1);
    doSecondThing_Expect();
    
    doFirstThing();

}

void test_doFirstThing_Should_NotDoSecondThingIfConditionIsFalse(void)
{   
    setCondition(0);

    doFirstThing();

}