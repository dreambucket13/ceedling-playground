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