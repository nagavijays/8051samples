#include <lpc214x.h>

void main()
{	
	T0TCR = 1;
	PINSEL0 =0x00000020;
	T0CCR = 0x00000003; 

	while(1) 
	{	
	}
}

