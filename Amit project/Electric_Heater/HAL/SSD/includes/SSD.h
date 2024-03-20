/*
 * SSD.h
 */ 


#ifndef SSD_H_
#define SSD_H_

#include "DIO.h"
#include "Clock.h"

#define SSD_FirstDigit_DataPort DIO_PortA
#define SSD_SecondDigit_DataPort DIO_PortB

#define SSD_FirstDigit_En DIO_ChannelB2
#define SSD_SecondDigit_En DIO_ChannelB1


void SSD_Init(void);
void SSD_WriteNum(uint8 FirstDigit,uint8 SecondDigit);

#endif /* SSD_H_ */
