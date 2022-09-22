#include "build/test/mocks/mock_function2.h"
#include "src/function1.h"
#include "/var/lib/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"


void setUp(void)

{

}



void tearDown(void)

{

}



void test_FUN1_doFirstThing_Should_DoSecondThingIfConditionIsTrue(void)

{

    FUN1_setCondition(1);

    FUN2_doSecondThing_CMockExpect(16);



    FUN1_doFirstThing();



}



void test_FUN1_doFirstThing_Should_NotDoSecondThingIfConditionIsFalse(void)

{

    FUN1_setCondition(0);



    FUN1_doFirstThing();



}



void test_FUN1_staticFunctionTest_Should_ReturnOneAndNotExpectFUN3Calls(void)

{



    FUN2_returnOne_CMockExpectAndReturn(33, 1);



    UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((FUN1_staticFunctionTest())), (

   ((void *)0)

   ), (UNITY_UINT)(35), UNITY_DISPLAY_STYLE_INT);



}
