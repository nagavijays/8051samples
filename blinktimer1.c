#include <reg51.h>

void delay(void) 
{
	unsigned int c=0;
	for(;c<15;c++)
	{
		while(!TF0);
		TF0=0;
	}
}

void amberdelay(void) 
{
	unsigned int c=0;
	for(;c<2;c++)
	{
		while(!TF0);
		TF0=0;
	}
}

void main() 
{
	TMOD= 0x01;
	TR0=1;
		
	while(1)
	{
		P0=0xF0;
		delay();
		P0=0x0F;
		delay();
	}
}
