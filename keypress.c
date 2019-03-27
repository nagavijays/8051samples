#include <reg51.h>

sbit sw1 = P2^0;
sbit sw2 = P2^1;



void main() 
{
	unsigned char vol;
	
	while(1)
	{
		if(sw1 == 0)
		{
			vol = 1;
			
		}
		if(sw2 == 0)
		{
			vol = 2;
			
		}
		P0 = vol;
	}
}