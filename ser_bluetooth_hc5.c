#include <reg51.h>

unsigned char c;
void main() 
{
	
	SCON = 0x50;
	TMOD = 0x20;
	TH1 = 0xFD;
	TL1 = 0xFD;
	TR1 = 1;
	
	while(1)
	{
		while(!RI);
		c = SBUF;
		//P0 = c;
		RI = 0;
		
		if(c == 0x42)
		{
			P0 = 0x80;
		}
		
		if(c == 0x43)
		{
			P0 = 0x00;
		}
		
		if(c == 0x44)
		{
			P0 = 0xFF;
		}
		
		
		SBUF = c;
		while(!TI);
		TI = 0;
		
		
	}
}
