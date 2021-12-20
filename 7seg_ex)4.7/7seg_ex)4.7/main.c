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
	unsigned char i, j;
	while(1)
	{
		for(i=0; i<6; i++)
		{
			for(j=0; j<10; j++)
			{
				PORTA = (i<<4) | j;
				_delay_ms(1000);
			}
		}
		PORTA = 0xFF;
		_delay_ms(1000);
	}
}


