/*
 * Project1.c
 *
 * Created: 30.08.2016 14:36:50
 *  Author: simonep
 */ 

#include <stdio.h>
#include <avr/io.h>
#define F_CPU 4915200UL
#include <util/delay.h>
#include "Hardware/UART.h"
 
#define FOSC 4915200 
#define BAUD 9600

#define MYUBRR FOSC/16/BAUD-1

int main(void)
{
	USART_Init(MYUBRR);
	
	DDRA = 0xFF;
	unsigned char c = 'a';
	
    while(1)
    {
		PORTA=0xFF;
		_delay_ms(1000);
		PORTA=0x00;
		_delay_ms(1000);
		
		//USART_Transmit(c);
		printf("hello\n");
    }
}