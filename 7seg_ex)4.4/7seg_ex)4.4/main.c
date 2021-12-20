/*
 * 7seg_ex)4.4.c
 *
 * Created: 2021-12-20 오후 6:20:25
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
			PORTA = i;
			_delay_ms(1000);
		}
		PORTA = 0xFF;
		_delay_ms(1000);
	}
}
