#include "function1.h"
#include "function2.h"

static uint8_t condition;

void doFirstThing()
{
    getCondition();

    if (condition){
        doSecondThing();
    }

}

uint8_t getCondition(){
    return condition;
}

void setCondition(uint8_t input){
    condition = input;
}