#include <reg51.h>

//sbit sw1 = P2^0;

unsigned char dc;

void delay(unsigned int x) 
{
	while(x--);
}

void main() 
{
	
	TMOD = 0x00;
	TR0 =1;
	while(1)
	{
		
		dc = dc + 1;		
	}
}

void display() interrupt 1
{
	P0 = 0xFF;
	delay(dc);
	P0 = 0x00;
}