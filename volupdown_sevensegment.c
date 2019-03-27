#include <reg51.h>

sbit sw1 = P2^0;
sbit sw2 = P2^1;

void delay(unsigned int x) 
{
	while(x--);
}

void main() 
{
	unsigned char c, hund, tens, ones, temp;
	unsigned char a[] = {0x3F, 0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
	
	unsigned char vol;
	
	while(1)
	{
		
		if(sw1 == 0)
		{
			delay(20000);
			if(sw1 ==0)
			{
				 vol = vol +1;
			}
			
			
		}
		if(sw2 == 0)
		{
			delay(20000);
			if(sw2 ==0)
			{
				 vol = vol -1;
			}
			
			
		}
		hund = vol/100;
		temp = vol%100;
		tens= temp/10;
		ones = temp%10;
		//P0=a[ones];
		P0=a[ones];
	}
}