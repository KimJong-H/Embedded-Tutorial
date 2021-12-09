/*
 * SW_LED.c
 *
 * Created: 2021-12-09 오후 6:18:10
 * Author : JongHun
 */ 

#define F_CPU 8000000UL

#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	unsigned char  swh;
    DDRA = 0x00;
	DDRC = 0xFF;
	
    while (1) 
    {
		swh = PINA;
		if(swh=0)
		{
			PORTC = 0x00;
		}
		else
		{
			PORTC = 0xFF;
		}
		
    }
}

