#include <reg51.h>


void delay(unsigned int x) 
{
	while(x--);
}
void main() 
{
	while(1)
	{
		P0=P0+1;
		delay(50000);
	}
}