/*
 * Mask ex)3.3.c
 *
 * Created: 2021-12-11 오후 6:24:57
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
		swh = PINA & 0x78;
		if(swh == 0x38) //sw8 pressed
		{
			PORTC = 0xBF;
			_delay_ms(100);
		}
		else if(swh == 0x58) //sw7 pressed
		{
			PORTC = 0xDF;
			_delay_ms(100);
		}
		else if(swh == 0x68) //sw6 pressed
		{
			PORTC = 0xEF;
			_delay_ms(100);
		}
		else if(swh == 0x70) //sw5 pressed
		{
			PORTC = 0xF7;
			_delay_ms(100);
		}
		else
		{
			PORTC = 0xFF;
			_delay_ms(100);
		}
    }
}

