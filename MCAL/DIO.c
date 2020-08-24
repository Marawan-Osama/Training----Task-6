/*
 * DIO.c
 *
 * Created: 8/24/2020 2:56:39 AM
 *  Author: PC
 */ 

#include "DIO.h"
#include "registers.h"

void DIO_init(uint8_t CTRL_state[4]){
	PA_CTRL = CTRL_state[0];
	PB_CTRL = CTRL_state[1];
	PC_CTRL = CTRL_state[2];
	PD_CTRL = CTRL_state[3];
}


void DIO_read(uint8_t port, uint8_t* read_info){
	switch(port){
		case 'A':
			*read_info = PA_STATE;
			break;
		case 'B':
			*read_info = PB_STATE;
			break;
		case 'C':
			*read_info = PC_STATE;
			break;
		case 'D':
			*read_info = PD_STATE;
			break;
	}
}


void DIO_write(uint8_t port, uint8_t data){
	switch(port){
		case 'A':
			PA_DATA = data;
			break;
		case 'B':
			PB_DATA = data;
			break;
		case 'C':
			PC_DATA = data;
			break;
		case 'D':
			PD_DATA = data;
			break;
	}
}

