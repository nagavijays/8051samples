#include <reg51.h>

sbit sw1 = P2^0;
sbit sw2 = P2^1;

void delay(unsigned int x) 
{
	while(x--);
}

void main() 
{
	unsigned char vol;
	
	while(1)
	{
		
		if(sw1 == 0)
		{
			//delay(50000);
			if(sw1 ==0)
			{
				 vol = vol +1;
			}
			
			
		}
		if(sw2 == 0)
		{
			//delay(50000);
			if(sw2 ==0)
			{
				 vol = vol -1;
			}
			
			
		}
		P0 = vol;
	}
}