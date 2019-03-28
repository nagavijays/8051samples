#include <reg51.h>

void delay(unsigned int x) 
{
	while(x--);
}
unsigned char entry, exit, current;
void main() 
{
	
	IE=0x85;
	IT0 = 1;
	IT1 = 1;
	while(1)
	{
		current = entry-exit;
		P0=current;
		
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