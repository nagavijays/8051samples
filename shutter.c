#include <reg51.h>

unsigned char c;

sbit shutter =P2^0;
void main() 
{
	
	SCON = 0x50;
	TMOD = 0x20;
	TH1 = 0xFD;
	TL1 = 0xFD;
	TR1 = 1;
	
	while(1)
	{
		if(shutter == 0) 
		{
			P0 = 0x80;
			SBUF = 'S';
			while(!TI);
			TI= 0;
			
			SBUF = 'O';
			while(!TI);
			TI= 0;
			
			
		}
		
	}
}
