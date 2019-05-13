#include <lpc214x.h>

unsigned int c,d;
void delay(unsigned long int x)
{
	while(x--);
}
void main()
{	

	PINSEL1=0x00080000;
	PINSEL1|=0x04000000;
	AD0CR=0X00210004;

	while(1) 
	{
		AD0CR|=0x01000000;
		d=AD0DR2;
		c = d;
		 //c = c <<6;
		 DACR = c;
		 delay(5000000);
		 


		
	}
}