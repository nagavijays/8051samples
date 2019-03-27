#include <reg51.h>


unsigned char entry, exit, current;

void delay(unsigned int x) 
{
	while(x--);
}

void main() 
{
	TMOD = 0x66;
	//TMOD = 0x02;
	
	TR0=1;
	TR1=1;
	while(1) 
	{
		entry = TL0;
		exit = TL1;
		
		P0 = entry;
		
		delay(50000);
		delay(50000);
		P0 = exit;
		
		delay(50000);
		delay(50000);
		current = entry -exit;
		P0 = current;
		
		delay(50000);
		delay(50000);
		delay(50000);
		
	}
	
}