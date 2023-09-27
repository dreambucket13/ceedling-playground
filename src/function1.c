#include "function1.h"
#include "function2.h"

static uint8_t condition;

static uint8_t FUN1_StaticFunction(uint8_t input){
    return input;
}

void FUN1_doFirstThing()
{
    FUN1_getCondition();

    if (condition){
        FUN2_doSecondThing();
    }

}

uint8_t FUN1_staticFunctionTest()
{

    return FUN1_StaticFunction(FUN2_returnOne());

}

uint8_t FUN1_getCondition(){
    return condition;
}

void FUN1_setCondition(uint8_t input){
    condition = input;
}

uint8_t FUN1_add(uint8_t input1, uint8_t input2){
    
    uint8_t result = 0;
    
    FUN2_AddAndReturnViaReference(input1, input2, &result);

    return result;
}