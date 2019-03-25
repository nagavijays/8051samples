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

void main() 
{
	TMOD= 0x01;
	TR0=1;
		
	while(1)
	{
		P0=0x80;
		delay();	
		
		P0=0xC0;
		delay();
		
		P0=0xE0;
		delay();
		
		P0=0xF0;
		delay();
		
		P0=0xF8;
		delay();
		
		P0=0xFC;
		delay();
		
		P0=0xFE;
		delay();
		
		P0=0xFF;
		delay();
	}
}