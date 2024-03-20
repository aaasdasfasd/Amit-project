/*
 * GINT.c
 */ 

#include "GINT.h"

void GINT_Enable_AllInterrupts(){
	SetBit(SREG_R, GINT_I_Bit);
}
void GINT_Disable_AllInterrupts(){
	ClearBit(SREG_R, GINT_I_Bit);
}
