#include <reg51.h>



void main() 
{
	TMOD = 0x06;
	//TMOD = 0x02;
	
	TR0=1;
	while(1) 
	{
		P0=TL0;
	}
	
}