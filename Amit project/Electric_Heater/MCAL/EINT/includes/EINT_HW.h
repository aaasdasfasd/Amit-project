/*
 * EINT_HW.h
 */ 


#ifndef EINT_HW_H_
#define EINT_HW_H_

#include "STD_Types.h"

#define GICR_R *((volatile uint8*)0x5B)
#define GIFR_R *((volatile uint8*)0x5A)
#define MCUCR_R *((volatile uint8*)0x55)
#define MCUCSR_R *((volatile uint8*)0x54)



#endif /* EINT_HW_H_ */
