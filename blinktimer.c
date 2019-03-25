#include <reg51.h>

void delay(void) 
{
	while(!TF0);
		TF0=0;
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
