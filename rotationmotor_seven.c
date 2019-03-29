#include <reg51.h>

sbit clock = P3^0;
sbit anticlock = P3^1;
//sbit pumpon = P3^2;

unsigned char liters;
unsigned char hund, tens, ones, thou =0, temp;
//unsigned char a[] = {0x3F, 0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};

unsigned char b[] = {0x20, 0x10,0x08,0x04,0x02,0x01};

unsigned char anticlockrot, clockrot;

void delay(unsigned int x) 
{
	while(x--);
}

void display()
{
		unsigned int i,j ;
	 if(anticlockrot ==1)
	 {
			for(j=0; j<6; j++)
			{
			
				P2 = b[j];
				delay(15000);
			}
			//anticlockrot = 0;
			clockrot = 0;
		}
	 
	 if(clockrot ==1)
	 {
			for(i=6; i>0; i--)
			{
			
				P2 = b[i-1];
				delay(15000);
			}
			//clockrot = 0;
			anticlockrot = 0;
		}
	 
}



void main() 
{
	
	clockrot =1;
	while(1)
	{
		
		display();
		
		if(clock == 0)
		{
			delay(5000);
			if(clock ==0)
			{
				clockrot = 1;
			}
			
			
		}
		if(anticlock == 0)
		{
			delay(5000);
			if(anticlock ==0)
			{
				anticlockrot =1;
			}
		}
		
	}
}