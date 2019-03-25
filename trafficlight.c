#include <reg51.h>

void delay(void) 
{
	unsigned int c=0;
	for(;c<30;c++)
	{
		while(!TF0);
		TF0=0;
	}
}

void amberdelay(void) 
{
	unsigned int c=0;
	for(;c<20;c++)
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
		P0=0x81;
		delay();
		P0=0x42;
		amberdelay();
		P0=0x24;
		delay();
		delay();
		//P0=0x82;
		
	}
}
