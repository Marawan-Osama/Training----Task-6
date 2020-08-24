/*
 * registers.h
 *
 * Created: 8/24/2020 1:30:52 AM
 *  Author: PC
 */ 

#ifndef REGISTERS_H_
#define REGISTERS_H_


typedef unsigned char uint8_t;


#define PA_DATA *((volatile uint8_t*)0x3B)
#define PA_CTRL *((volatile uint8_t*)0x3A)
#define PA_STATE *((volatile uint8_t*)0x39)


#define PB_DATA *((volatile uint8_t*)0x38)
#define PB_CTRL *((volatile uint8_t*)0x37)
#define PB_STATE *((volatile uint8_t*)0x36)


#define PC_DATA *((volatile uint8_t*)0x35)
#define PC_CTRL *((volatile uint8_t*)0x34)
#define PC_STATE *((volatile uint8_t*)0x33)


#define PD_DATA *((volatile uint8_t*)0x32)
#define PD_CTRL *((volatile uint8_t*)0x31)
#define PD_STATE *((volatile uint8_t*)0x30)


#endif /* REGISTERS_H_ */