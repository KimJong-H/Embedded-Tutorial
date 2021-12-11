/*
 * Mask_ex)3.4.c
 *
 * Created: 2021-12-11 오후 6:51:21
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
			PORTC = 0x7F;
			_delay_ms(100);
		}
		else if(swh == 0xBF) //sw8 pressed
		{
			PORTC = 0xBF;
			_delay_ms(100);
		}
		else if(swh == 0xDF) //sw7 pressed
		{
			PORTC = 0xDF;
			_delay_ms(100);
		}
		else if(swh == 0xEF) //sw6 pressed
		{
			PORTC = 0xEF;
			_delay_ms(100);
		}
		else if(swh == 0xF7) //sw5 pressed
		{
			PORTC = 0xF7;
			_delay_ms(100);
		}
		else if(swh == 0xFB) //sw4 pressed
		{
			PORTC = 0xFB;
			_delay_ms(100);
		}
		else if(swh == 0xFD) //sw3 pressed
		{
			PORTC = 0xFD;
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

