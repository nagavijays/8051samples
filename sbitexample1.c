#include <reg51.h>


sbit LED = P1^0;

void delay(unsigned int x) 
{
	while(x--);
}
void main() 
{
	while(1)
	{
		LED=~LED;
		delay(50000);
	}
}