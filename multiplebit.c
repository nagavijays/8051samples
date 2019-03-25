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
		IEEE=~IEEE;
		CLOUD=~CLOUD;
		HOBBY=~HOBBY;
		QUAD=~QUAD;
		delay(50000);
	}
}