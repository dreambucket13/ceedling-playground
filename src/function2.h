#ifndef _FUNCTION2_H
#define _FUNCTION2_H

#include <stdint.h>
#include <stdio.h>

void FUN2_doSecondThing();
uint8_t FUN2_returnOne();
void FUN2_AddAndReturnViaReference(uint8_t input1, uint8_t input2, uint8_t* result);

#endif //_FUNCTION2_H