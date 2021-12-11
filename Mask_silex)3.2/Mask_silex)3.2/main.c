/*
 * Mask_silex)3.2.c
 *
 * Created: 2021-12-11 오후 7:36:45
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
		swh = PINA & 0xFF;
		if(swh == 0x7F) //sw9 pressed
		{
			PORTC = 0x00;
			_delay_ms(100);
		}
		else if(swh == 0xBF) //sw8 pressed
		{
			PORTC = 0x80;
			_delay_ms(100);
		}
		else if(swh == 0xDF) //sw7 pressed
		{
			PORTC = 0xC0;
			_delay_ms(100);
		}
		else if(swh == 0xEF) //sw6 pressed
		{
			PORTC = 0xE0;
			_delay_ms(100);
		}
		else if(swh == 0xF7) //sw5 pressed
		{
			PORTC = 0xF0;
			_delay_ms(100);
		}
		else if(swh == 0xFB) //sw4 pressed
		{
			PORTC = 0xF8;
			_delay_ms(100);
		}
		else if(swh == 0xFD) //sw3 pressed
		{
			PORTC = 0xFC;
			_delay_ms(100);
		}
		else if(swh == 0xFE) //sw2 pressed
		{
			PORTC = 0xFE;
			_delay_ms(100);
		}
		else
		{
			PORTC = 0xFF;
			_delay_ms(100);
		}
		
	}
}