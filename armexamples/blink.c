#include <lpc214x.h>

void main()
{	IO0DIR =0xffffffff;
	while(1) 
	{
		IO0PIN = ~IO0PIN;
	}
}