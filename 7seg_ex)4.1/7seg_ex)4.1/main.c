/*
 * 7seg_ex)4.1.c
 *
 * Created: 2021-12-20 오전 1:51:18
 * Author : JongHun
 */ 
#define F_CPU 8000000UL

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
     DDRC = 0xFF;

     while(1)
     {
	     PORTC = 0xFE;  
		 _delay_ms(1000); // a
	     PORTC = 0xFD;
		 _delay_ms(1000); // b
	     PORTC = 0xFB;
		 _delay_ms(1000); // c
	     PORTC = 0xF7;
		 _delay_ms(1000); // d
	     PORTC = 0xEF;
		 _delay_ms(1000); // e
	     PORTC = 0xDF;
		 _delay_ms(1000); // f
	     PORTC = 0xBF;
		 _delay_ms(1000); // g
	     PORTC = 0x7F;
		 _delay_ms(1000); // dp
	     PORTC = 0xFF;
		 _delay_ms(1000); // Off
     }

}

