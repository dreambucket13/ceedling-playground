#include "function2.h"
#include "function3.h"

void FUN2_doSecondThing()
{
    printf("The second thing\n");
}

uint8_t FUN2_returnOne()
{
    return FUN3_returnOne();
}

void FUN2_AddAndReturnViaReference(uint8_t input1, uint8_t input2, uint8_t* result){

    *result = input1 + input2;
    printf("Result from fun2 is %d\n", *result);

}