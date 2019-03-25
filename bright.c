#include <reg51.h>

void delay(unsigned int x) 
{
	unsigned int c=0;
	for(;c<x;c++)
	{
	while(!TF0);
		TF0=0;
	}
}

void main() 
{
	TMOD= 0x10;
	TR0=1;
	P0=0xff;
	while(1)
	{
		unsigned int i=0;
		for(;i<50;i++)
		{
			P0=~P0;
			delay(i);
			
		}
		
	}
}		