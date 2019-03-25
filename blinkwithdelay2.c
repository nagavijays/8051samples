#include <reg51.h>

void delay(unsigned int x) 
{
	while(x--);
}

void main() 
{
	while(1)
	{
		P0=0xAA;
		delay(50000);
		P0=0x55;
		delay(50000);
	}
}