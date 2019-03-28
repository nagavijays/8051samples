#include <reg51.h>

sbit sw1 = P2^0;
sbit sw2 = P2^1;

void delay(unsigned int x) 
{
	while(x--);
}

void openingdoor()
{
	unsigned char leds;
	leds = 0xFF;
	while(leds) 
	{
		P0= leds;
		leds = leds <<1;
		delay(50000);
	}
	
}
void closingdoor()
{
	unsigned char leds, temp, i, result;
	temp = 0x80;
	result = temp;
	for(i = 0; i<7; i++) 
	{
		
		P0= result;
		
		temp = temp >> 1;
		result = result + temp;
		
		delay(50000);
	}
	
}

void main() 
{
	unsigned char vol;
	unsigned char state;
	
	while(1)
	{
		if(state == 1) // Door open. All Leds off
		{
			P0 = 0x00;
		}
		if(state == 0) // Door closed.. ALl Leds on.
		{
			P0 = 0xFF;
		}
		
		if(sw1 == 0)
		{
			delay(500);
			if(sw1 ==0)
			{
				openingdoor();
				state = 1;
			}
			
			
		}
		if(sw2 == 0)
		{
			delay(500);
			if(sw2 ==0)
			{
				 closingdoor();
				state = 0; 
			}
			
			
		}
		//P0 = vol;
	}
}