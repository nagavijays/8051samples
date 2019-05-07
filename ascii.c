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
		c = c+1;
		SBUF = c;
		while(!TI);
		TI = 0;
		
		
	}
}
