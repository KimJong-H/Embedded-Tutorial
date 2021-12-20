/*
 * 7seg_ex)4.2.c
 *
 * Created: 2021-12-20 오후 6:01:54
 * Author : JongHun
 */ 
#define F_CPU 8000000UL

#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    DDRC = 0xFF;
    while (1) 
    {
		PORTC = 0xC0;	//0
		_delay_ms(1000);
		PORTC = 0xF9;	//1
		_delay_ms(1000);
		PORTC = 0xA4;	//2
		_delay_ms(1000);
		PORTC = 0xB0;	//3
		_delay_ms(1000);
		PORTC = 0x99;	//4
		_delay_ms(1000);
		PORTC = 0x92;	//5
		_delay_ms(1000);
		PORTC = 0x82;	//6
		_delay_ms(1000);
		PORTC = 0xF8;	//7
		_delay_ms(1000);
		PORTC = 0x80;	//8
		_delay_ms(1000);
		PORTC = 0x90;	//9
		_delay_ms(1000);
		PORTC = 0xFF;	//off
		_delay_ms(1000);
		
    }
}

