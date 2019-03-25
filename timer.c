#include <reg51.h>



void main() 
{
	TMOD= 0x01;
	TR0=1;
		
	while(1)
	{
		while(!TF0);
		TF0=0;
		P0=~P0;
	}
}