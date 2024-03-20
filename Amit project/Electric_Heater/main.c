/*
 * Electric_Heater.c
 */ 


#include "StateMachine.h"
#include "WaterHeater_Control.h"


int main(void)
{
	WaterHeater_Control_Init();
	SM_Init();
	
    while (1) 
    {
		SM();
    }
}




