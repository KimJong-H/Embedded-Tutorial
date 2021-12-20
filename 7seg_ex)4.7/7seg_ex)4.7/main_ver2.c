/*
 * 7seg_ex)4.7.c
 *
 * Created: 2021-12-20 오후 6:54:06
 * Author : JongHun
 */ 
#define   F_CPU  8000000UL

#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRA = 0xFF;
	unsigned char second, sib, il;
	while(1)
	{
		for(second=0; second<60; second++)
		{
			sib = second /10;
			il = second % 10;
			PORTA = (sib<<4) | il;
			_delay_ms()
		}
		PORTA = 0xFF;
		_delay_ms(1000);
	}
}


