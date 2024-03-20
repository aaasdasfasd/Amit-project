/*
 * Relay.h
 */ 


#ifndef RELAY_H_
#define RELAY_H_

#include "DIO.h"

#define RELAY_1 DIO_ChannelA2
#define RELAY_2 DIO_ChannelC3


void Relay_Init(void);
void Relay_switchON(DIO_ChannelType RelayNo);
void Relay_switchOFF(DIO_ChannelType RelayNo);


#endif /* RELAY_H_ */
