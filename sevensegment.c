#include <reg51.h>


void delay(unsigned int x) 
{
	while(x--);
}
void main() 
{
	while(1)
	{
		P0=0x3F; //0
		delay(50000);
		
		P0=0x06; //1
		delay(50000);
		
		P0=0x5b; //2
		delay(50000);
		
		
		P0=0x4F; //3
		delay(50000);
		
		
		P0=0x66; //4
		delay(50000);
		
		P0=0x6D; //5
		delay(50000);
		
		P0=0x7D; //6
		delay(50000);
		
		P0=0x07; //7
		delay(50000);;
		
		P0=0x7F; //8
		delay(50000);
		
		P0=0x6F; //9
		delay(50000);
		
		
	}
}