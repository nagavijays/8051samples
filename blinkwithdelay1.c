#include <reg51.h>

void delay(unsigned int x) 
{
	while(x--);
}

void main() 
{
	while(1)
	{
		P0=0xF0;
		delay(50000);
		P0=0x0F;
		delay(50000);
	}
}