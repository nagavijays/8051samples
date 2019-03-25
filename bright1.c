#include <reg51.h>



void main() 
{
	//TMOD= 0x01;
	//TR0=1;
	P0=0xff;
	
	unsigned int i,t;
	t=0;
	while(1)
	{
		
	//i=0;	
	if(t==0)
	{
		for(i=0;i<250;i++)
		{
			P0=0x00;	

		}
		t=1;
	}
	else
	{
		for(i=0;i<50;i++)
		{
			P0=0xff;	
		}
		t=0;
	}
						
	}
}		