/*
 * 7seg_silex)4.2.c
 *
 * Created: 2021-12-20 오후 7:21:37
 * Author : JongHun
 */ 
#define   F_CPU  8000000UL

#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRC = 0xFF;
	
	unsigned char avr[] = {0xA4, 0xC0, 0xF9, 0x90, 0xC0, 0x80, 0xC0, 0xF8, 0xFF};
	
	while (1)
	{
		for(int i=0; i<8; i++)
		{
			PORTC = avr[i];
			_delay_ms(1000);
		}
		PORTC = avr[8];
		_delay_ms(1000);
	}
}
