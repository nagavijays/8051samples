#include <reg51.h>


sbit IEEE = P0^7;
sbit CLOUD = P1^0;
sbit HOBBY = P2^2;
sbit QUAD = P3^0;


void delay(unsigned int x) 
{
	while(x--);
}
void main() 
{
	while(1)
	{
		IEEE=1;
		delay(50000);
		
		IEEE=0;
		delay(50000);
		
		
		CLOUD=1;
		delay(50000);
		
		CLOUD=0;
		delay(50000);
		
		HOBBY=1;
		delay(50000);
		
		HOBBY=0;
		delay(50000);
		
		QUAD=~QUAD;
		delay(50000);
		
		QUAD=~QUAD;
		delay(50000);
	}
}