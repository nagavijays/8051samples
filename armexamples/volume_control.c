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
		IO0PIN = 0x002E0000;
		delay(c);
		IO0PIN = 0x00000000;
		delay(c);
		c=c+150;
		//delay(c);

	}
}