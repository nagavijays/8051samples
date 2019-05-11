#include <lpc214x.h>

void delay(unsigned long int x)
{
	while(x--);
}

void main()
{	
	IO0DIR =0x000E0000;
	while(1) 
	{
		IO0PIN = 0x000E0000;
		delay(5000000);
		IO0PIN = 0x00000000;
		delay(5000000);

	}
}