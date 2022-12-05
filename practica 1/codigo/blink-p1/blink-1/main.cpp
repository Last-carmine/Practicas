/*
 * GccApplication2.cpp
 *
 * Created: 01/12/2022 08:15:55 a. m.
 * Author : Marti
 */ 

#define F_CPU  8000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRA = 0x01;
	PORTA = 0x00;
	while (1)
	{
		PORTA = 0x01;
		_delay_ms(250);
		_delay_ms(250);
		PORTA = 0x00;
		_delay_ms(250);
	_delay_ms(250);}}

