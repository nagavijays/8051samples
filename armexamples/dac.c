#include <lpc214x.h>

unsigned int c,d;
void delay(unsigned long int x)
{
	while(x--);
}
void main()
{	

	PINSEL1=0x00080000;
	while(1) 
	{
		d =d +1;
		c = d;
		 c = c <<6;
		 DACR = c;
		 delay(5000000);
	}
}