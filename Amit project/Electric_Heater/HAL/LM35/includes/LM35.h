/*
 * LM35.h
 */ 


#ifndef LM35_H_
#define LM35_H_

#include "ADC.h"

void LM35_Init();
int16 LM35_Read(ADC_ChannelType ChannelId);

#endif /* LM35_H_ */
