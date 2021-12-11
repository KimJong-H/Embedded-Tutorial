/*
 * Mask_sex)3.1.c
 *
 * Created: 2021-12-11 오후 7:17:03
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
		swh = PINA & 0x1E;
		if(swh == 0x0E) //sw6 pressed
		{
			PORTC = 0xEF;
			_delay_ms(100);
		}
		else if(swh == 0x16) //sw5 pressed
		{
			PORTC = 0xF7;
			_delay_ms(100);
		}
		else if(swh == 0x1A) //sw4 pressed
		{
			PORTC = 0xFB;
			_delay_ms(100);
		}
		else if(swh == 0x1c) //sw3 pressed
		{
			PORTC = 0xFD;
			_delay_ms(100);
		}
		else
		{
			PORTC = 0xFF;
			_delay_ms(100);
		}
	}
}
