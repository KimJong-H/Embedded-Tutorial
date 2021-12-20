/*
 * 7seg_ex)4.5.c
 *
 * Created: 2021-12-20 오후 6:26:33
 * Author : JongHun
 */ 
#define F_CPU 8000000UL

#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRA = 0xFF;
	unsigned char i;
	
	while (1)
	{
		for(i=0; i<10; i++)
		{
			PORTA = (i<<4) | 0x0F;
			_delay_ms(1000);
		}
		PORTA = 0xFF;
		_delay_ms(1000);
	}
}
