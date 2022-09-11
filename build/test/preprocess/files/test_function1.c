#include "build/test/mocks/mock_function2.h"
#include "src/function1.h"
#include "/var/lib/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"


void setUp(void)

{

}



void tearDown(void)

{

}



void test_doFirstThing_Should_DoSecondThingIfConditionIsTrue(void)

{

    setCondition(1);

    doSecondThing_CMockExpect(16);



    doFirstThing();



}



void test_doFirstThing_Should_NotDoSecondThingIfConditionIsFalse(void)

{

    setCondition(0);

    doSecondThing_CMockExpect(25);



    doFirstThing();





}
