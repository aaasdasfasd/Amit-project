/*
 * EEPROM_HW.h
 */ 


#ifndef EEPROM_HW_H_
#define EEPROM_HW_H_

#include "STD_Types.h"

#define EEARL_R *((volatile uint8*)0x3F)
#define EEARH_R *((volatile uint8*)0x3E)
#define EEDR_R *((volatile uint8*)0x3D)
#define EECR_R *((volatile uint8*)0x3C)


#endif /* EEPROM_HW_H_ */
