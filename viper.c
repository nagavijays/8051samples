#include <reg51.h>

sbit sw1 = P2^0;
sbit sw2 = P2^1;

void delay(unsigned int x) 
{
	while(x--);
}

void main() 
{
	unsigned int c;
	while(1)
	{
		c= c+100;
		sw1= 1;
		sw2 = 0;
		delay(c);
		//delay(c);
		
		//P0=c/250;
		
		sw1= 0;
		sw2 = 1;
		delay(c);
		//delay(c);
		P0=c/260;
	}
}