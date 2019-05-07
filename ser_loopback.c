#include <reg51.h>

void main() 
{
	
	SCON = 0x50;
	TMOD = 0x20;
	TH1 = 0xFD;
	TL1 = 0xFD;
	TR1 = 1;
	while(1)
	{
		SBUF = 'B';
		while(!TI);
		TI = 0;
		
		while(!RI);
		P0 = SBUF;
		RI = 0;
	}
}
