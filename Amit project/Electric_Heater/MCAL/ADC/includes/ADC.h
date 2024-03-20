/*
 * ADC.h
 */ 


#ifndef ADC_H_
#define ADC_H_

#include "BitMath.h"
#include "ADC_HW.h"
#include "ADC_Types.h"

void ADC_Init(void);
int16 ADC_Read(ADC_ChannelType ChannelId);


#endif /* ADC_H_ */
