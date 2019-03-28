#include <reg51.h>

void delay(unsigned int x) 
{
	while(x--);
}
unsigned char entry, exit, current;
unsigned char hund, tens, ones, temp;
	unsigned char a[] = {0x3F, 0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
void main() 
{
	
	IE=0x85;
	IT0 = 1;
	IT1 = 1;
	while(1)
	{
		current = entry-exit;
		
		hund = current/100;
		
		temp = current%100;
		tens= temp/10;
		ones = temp%10;
		P0=a[ones];
		
		
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