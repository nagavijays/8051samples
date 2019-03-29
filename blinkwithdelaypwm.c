#include <reg51.h>

void delay(unsigned int x) 
{
	while(x--);
}

void main() 
{
	unsigned int c=50000;
	while(1)
	{
		P0=~P0;
		
		delay(c);
		c=c-1000;
		if(c<=20000)
			delay(1000);
	}
}