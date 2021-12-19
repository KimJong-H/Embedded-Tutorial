/*
 * Mask_silex)3.3.c
 *
 * Created: 2021-12-13 오후 6:58:12
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
			PORTC = 0xFE;
			_delay_ms(1000);
			for(int i=0;i<7;i++)
			{
				PORTC = (PORTC <<1);
				_delay_ms(1000);
			}
			_delay_ms(100);
		}
		else if(swh == 0x58) //sw7 pressed
		{
			PORTC = 0xFC;
			_delay_ms(1000);
			for(int i=0;i<3;i++)
			{
				PORTC = (PORTC <<2);
				_delay_ms(1000);
			}
			_delay_ms(100);
		}
		else if(swh == 0x68) //sw6 pressed
		{
			PORTC = 0x7F;
			_delay_ms(1000);
			for(int i=0;i<7;i++)
			{
				PORTC = (PORTC >>1);
				_delay_ms(1000);
			}
			_delay_ms(100);
		}
		else if(swh == 0x70) //sw5 pressed
		{
			PORTC = 0x3F;
			_delay_ms(1000);
			for(int i=0;i<3;i++)
			{
				PORTC = (PORTC >>2);
				_delay_ms(1000);
			}
			_delay_ms(100);
		}
		else
		{
			PORTC = 0xFF;
			_delay_ms(100);
		}
	}
}

