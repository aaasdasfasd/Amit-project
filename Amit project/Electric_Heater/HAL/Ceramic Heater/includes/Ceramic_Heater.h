/*
 * Ceramic_Heater.h
 */ 


#ifndef CERAMIC_HEATER_H_
#define CERAMIC_HEATER_H_

#include "STD_Types.h"
#include "DIO.h"
#include "Relay.h"


#define HEATER_Channel RELAY_1

typedef enum
{
	HEATER_OFF_MODE = 0,
	HEATER_ON_MODE,
	HEATER_UNDEFINED_MODE
}Heater_ModeType;

void Heater_Init(void);
void Heater_SetMode(Heater_ModeType HeaterMode);


#endif /* CERAMIC_HEATER_H_ */
