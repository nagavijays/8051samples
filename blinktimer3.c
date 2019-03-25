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
		
	unsigned int i;
	
	TMOD= 0x01;
	TR0=1;

	
	while(1)
	{
			P0=0x80;
		delay();
		for(i=0; i<8; i++) 
		{
			P0=P0>>1;
			delay();
			
		}	
	}
}