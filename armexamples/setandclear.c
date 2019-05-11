#include <lpc214x.h>

unsigned long int c;

void delay(unsigned long int x)
{
	while(x--);
}

void main()
{	
	IO0DIR =0xffffffff;

	while(1) 
	{
		IO0SET = 0x000E0000; // with led only
		//IO0SET = 0x002E0000; // with buzzer and led
		delay(5000000);
		IO0CLR = 0x000E0000; // with led only
		//IO0CLR = 0x002E0000; // with buzzer and led
		delay(5000000);
		//c=c+150;
		//delay(c);

	}
}