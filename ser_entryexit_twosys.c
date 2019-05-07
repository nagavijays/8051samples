#include <reg51.h>

unsigned char entry, exit, current;
	void delay(unsigned int x) 
{
	while(x--);
}


void main() 
{
	SCON = 0x50;
	TMOD = 0x20;
	TH1 = 0xFD;
	TL1 = 0xFD;
	TR1 = 1;
	
	IE=0x85;
	IT0 = 1;
	IT1 = 1;
	while(1)
	{
		current = entry-exit;
		//P0=current;
		SBUF = current;
		while(!TI);
		TI = 0;
		
		
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