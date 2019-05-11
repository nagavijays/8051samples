#include <lpc214x.h>

void delay(unsigned long int x)
{
	while(x--);
}

void main()
{	IO0DIR =0xffffffff;
	while(1) 
	{
		IO0PIN = ~IO0PIN;
		delay(5000000);
	}
}