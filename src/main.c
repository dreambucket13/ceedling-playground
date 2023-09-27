#include <stdio.h>
#include <stdint.h>
#include "function1.h"

void main(){

    FUN1_doFirstThing();

    uint8_t num1 = 2;
    uint8_t num2 = 2;

    uint8_t result = FUN1_add(num1, num2);

    printf("Sum: %d\n", result);


}