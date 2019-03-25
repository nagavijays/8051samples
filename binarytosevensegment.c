#include <reg51.h>


void delay(unsigned int x) 
{
	while(x--);
}
void main() 
{
	unsigned char c, hund, tens, ones, temp;
	unsigned char a[] = {0x3F, 0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
	c = 0;
	while(1)
	{
		
		//P0=0x6F; //9
		//delay(50000);
		
		c=c+1;
		hund = c/100;
		
		temp = c%100;
		tens= temp/10;
		ones = temp%10;
		P0=a[ones];
		P2=a[tens];
		
		delay(50000);
		
	}
}