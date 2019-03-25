#include <reg51.h>

void delay(unsigned int x) 
{
	while(x--);
}

void main() 
{

	while(1)
	{
		
		P0=0xFF;
		delay(50000);
		
		P0=0xFE;
		delay(50000);
		
		P0=0xFC;
		delay(50000);
	
		P0=0xF8;
		delay(50000);
		
		P0=0xF0;
		delay(50000);		
		
		P0=0xE0;
		delay(50000);		
		
		P0=0xC0;
		delay(50000);		
		
		P0=0x80;
		delay(50000);	

		P0=0x00;
		delay(50000);	
		
		
		P0=0x80;
		delay(50000);	
		
		P0=0xC0;
		delay(50000);
		
		P0=0xE0;
		delay(50000);
		
		P0=0xF0;
		delay(50000);
		
		P0=0xF8;
		delay(50000);
		
		P0=0xFC;
		delay(50000);
		
		P0=0xFE;
		delay(50000);
		
		P0=0xFF;
		delay(50000);

		
	}
}