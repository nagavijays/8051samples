#include <reg51.h>

sbit increment = P2^0;
sbit decrement = P2^1;
sbit pumpon = P2^2;

unsigned char liters;
unsigned char hund, tens, ones, thou =0, temp;
unsigned char a[] = {0x3F, 0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};

void delay(unsigned int x) 
{
	while(x--);
}

void display()
{
		hund = liters/100;
		
		temp = liters%100;
		tens= temp/10;
		ones = temp%10;
		P3 = a[ones];
}

void pumponledon()
{
	//unsigned char leds, temp, i, result;
	P0 = 0xFF;
	while(liters) 
	{
		
		liters = liters -1;
		
		display();
		delay(50000);
		
		
	}
	P0 = 0x00;
	
}

void main() 
{
	
	//unsigned char state;
	liters = 0x07;
	
	while(1)
	{
		
		display();
		P0 = 0x00;
		//P3 = a[2];
		
		
		if(increment == 0)
		{
			delay(500);
			if(increment ==0)
			{
				if(liters <10)
					liters = liters + 1;
			}
			
			
		}
		if(decrement == 0)
		{
			delay(500);
			if(decrement ==0)
			{
				if(liters > 0)
					liters = liters - 1;
				
			}
		}
		
		if(pumpon == 0)
		{
			delay(500);
			if(pumpon ==0)
			{
				pumponledon();
			}
		}
	}
}