#include <reg51.h>


void delay(unsigned int x) 
{
	while(x--);
}
void main() 
{
	//unsigned char input, hund, tens, ones, temp;
	unsigned char a[] = {0x3F, 0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
	unsigned int count, input, orig;
	
	while(1)
	{
		count =0;
		input = 55;
		orig = input;
		while (input) 
		{ 
			count = count + (input & 1); 
			input = input >> 1; 
		} 
		P2=a[count];
		P0=orig;
			
		delay(50000);
		
	}
}