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
		SBUF = 'L';
		while(!TI);
		TI = 0;
		
		SBUF = 'U';
		while(!TI);
		TI = 0;
		SBUF = 'N';
		while(!TI);
		TI = 0;
		SBUF = 'C';
		while(!TI);
		TI = 0;
		SBUF = 'H';
		while(!TI);
		TI = 0;
		SBUF = ' ';
		while(!TI);
		TI = 0;
		SBUF = 'B';
		while(!TI);
		TI = 0;
		SBUF = 'R';
		while(!TI);
		TI = 0;
		SBUF = 'E';
		while(!TI);
		TI = 0;
		SBUF = 'A';
		while(!TI);
		TI = 0;
		
		SBUF = 'K';
		while(!TI);
		TI = 0;
		
		//SBUF = 0x0A;
		//while(!TI);
		//TI = 0;
		
		SBUF = 0x0D;
		while(!TI);
		TI = 0;

		
	}
}
