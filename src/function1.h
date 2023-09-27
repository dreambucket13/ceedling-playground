#ifndef _FUNCTION1_H
#define _FUNCTION1_H

#include <stdint.h>
#include <stdio.h>

void FUN1_doFirstThing();
uint8_t FUN1_staticFunctionTest();

uint8_t FUN1_getCondition();
void FUN1_setCondition(uint8_t input);
uint8_t FUN1_add(uint8_t input1, uint8_t input2);

#endif //_FUNCTION1_H