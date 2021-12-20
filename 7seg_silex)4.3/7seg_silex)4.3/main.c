/*
 * 7seg_silex)4.3.c
 *
 * Created: 2021-12-20 오후 7:30:11
 * Author : JongHun
 */ 
#define   F_CPU  8000000UL

#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRA = 0xFF;
	
	while (1)
	{
		for(int i=0; i<10; i++)
		{
			PORTA = i | 0xF0;
			_delay_ms(1000);
		}
		PORTA = 0xFF;
		_delay_ms(1000);
	}
}

