/*
 * Mask ex)3.2.c
 *
 * Created: 2021-12-11 오후 6:15:14
 * Author : JongHun
 */ 

#define F_CPU 8000000UL

#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	unsigned char swh;
	
	DDRA = 0x00;
	DDRC = 0xFF;
	
    while (1) 
    {
		swh = PINA & 0x60;
		if(swh == 0x40)
		{
			PORTC = 0x0F;
			_delay_ms(100);
		}
		else if(swh == 0x20)
		{
			PORTC = 0xF0;
			_delay_ms(100);
		}
		else if(swh == 0x00)
		{
			PORTC = 0x00;
			_delay_ms(100);
		}
		else
		{
			PORTC = 0xFF;
			_delay_ms(100);
		}
    }
}

