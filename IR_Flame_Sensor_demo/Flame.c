#define F_CPU 16000000UL
#include<avr/io.h>
#include<util/delay.h>


int main(void){
DDRB |= (1<<5);
DDRB |= (1<<4);
DDRB &= ~(1 << PINB3);
while(1)
{
	if(PINB & (1 << PINB3))
	{
		PORTB &= ~(1<<PORTB5); //led
		PORTB &= ~(1<<PORTB4); //buzzer
   	}
 	else
 	{
		PORTB |= (1<<PORTB5); //led
   		PORTB |= (1<<PORTB4); //buzzer
	}
//_delay_ms(10);
}
}
