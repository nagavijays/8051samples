#include <reg51.h>

void delay(unsigned int x) 
{
	while(x--);
}
unsigned char entry, exit, current;
unsigned char hund, tens, ones, thou =0, temp;
unsigned char a[] = {0x3F, 0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};

unsigned int dc;

sbit ones_sw = P2^0;
sbit tens_sw = P2^1;
sbit hund_sw = P2^2;
sbit thou_sw = P2^3;
//thou = 0;
sbit intensity = P2^4;
sbit intensity_low = P2^5;

void main() 
{
	
	IE=0x87;
	IT0 = 1;
	IT1 = 1;
	TMOD = 0x00; // 13 bit timer
	TR0 = 1;
	while(1)
	{
		current = entry-exit;
		
		hund = current/100;
		
		temp = current%100;
		tens= temp/10;
		ones = temp%10;
		
		
		
		if(intensity ==0)
		{
			delay(10000);
			dc = dc +10;
			if(dc >=2000)
				dc=50;
		}
		if(intensity_low ==0)
		{
			delay(10000);
			dc = dc -10;
			if(dc <=50)
				dc=51;
		}
	}
}
void entrycount() interrupt 0 
{
	entry = entry+1;
	}

void exitcount() interrupt 2 
{
	exit =exit+1;
}

void display() interrupt 1 
{
	ones_sw = 1;
	P0 = a[ones];
	delay(dc);
	ones_sw = 0;
	
	tens_sw = 1;
	P0 = a[tens];
	delay(dc);
	tens_sw = 0;
	
	hund_sw = 1;
	P0 = a[hund];
	delay(dc);
	hund_sw = 0;
	
	thou_sw = 1;
	P0 = a[thou];
	delay(dc);
	thou_sw = 0;
	
	
}