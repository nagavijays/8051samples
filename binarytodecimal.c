#include <reg51.h>


void delay(unsigned int x) 
{
	while(x--);
}
void main() 
{
	unsigned char c, hund, tens, ones, temp;
	c = 0xFF;
	while(1)
	{
		
		//P0=0x6F; //9
		//delay(50000);
		
		
		hund = c/100;
		
		temp = c%100;
		tens= temp/10;
		ones = temp%10;
		
		c=c+1;
		
	}
}