#include <reg51.h>

void main() 
{
	
	IE=0x81;
	while(1)
	{
		P0=0x00;
	}
}
void ext0() interrupt 0 
{
	P0 = 0xFF;
}