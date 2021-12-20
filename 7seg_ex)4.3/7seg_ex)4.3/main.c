/*
 * 7seg_ex)4.3.c
 *
 * Created: 2021-12-20 오후 6:10:40
 * Author : JongHun
 */ 
#define F_CPU 8000000UL

#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    DDRC = 0xFF;
	unsigned char avr[] = {0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90, 0xFF};
	
    while (1) 
    {
		for(int i=0; i<11; i++)
		{
			PORTC = avr[i];
			_delay_ms(1000);
		}
		
// 		for(int i=0; i<10; i++)
// 		{
// 			PORTC = avr[i];
// 			_delay_ms(1000);
// 		}
// 		PORTC = avr[10];
// 		_delay_ms(1000);
    }
}

