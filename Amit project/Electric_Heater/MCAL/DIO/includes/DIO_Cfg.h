/*
 * DIO_Cfg.h
 */ 


#ifndef DIO_CFG_H_
#define DIO_CFG_H_

#include "DIO.h"

typedef struct 
{
	DIO_DirType PinDir;
	STD_LevelType Level;
}DIO_PinCfg;

#define PINCOUNT 32

void DIO_Init (void);

#endif /* DIO_CFG_H_ */
