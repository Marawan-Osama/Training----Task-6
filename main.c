/*
 * Task6.c
 *
 * Created: 8/24/2020 1:29:34 AM
 * Author : PC
 */ 

#include <avr/io.h>
#include "DIO.h"
#include "LED.h"
#include "registers.h"
typedef unsigned char uint8_t;

int main(void)
{
    
	uint8_t CTRL_state[4] = {0x01,0x00,0x00,0x00};
	DIO_init(CTRL_state);
	LED_init('A',0);
	
	//trying to make the button
	uint8_t button, button_previous = 0;
	
	
    while (1) 
    {
		DIO_read('C',&button);
		if(button == 1 && button_previous == 0){
			get_LED_state();
			if(LED_state == 1){
				LED_change_state();
				button_previous = button;
    }
	else{
		LED_change_state();
		button_previous = button;
	}
		}
	if(button == 0 && button_previous == 1){
		button_previous = button;
	}
		}
	}