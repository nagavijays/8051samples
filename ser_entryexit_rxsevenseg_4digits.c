#include <reg51.h>

void delay(unsigned int x) 
{
	while(x--);
}
unsigned char entry, exit, current;
unsigned char hund, tens, ones, temp,thou;
	unsigned char a[] = {0x3F, 0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
	
sbit ones_sw = P2^0;
sbit tens_sw = P2^1;
sbit hund_sw = P2^2;
sbit thou_sw = P2^3;
	
void main() 
{
	SCON = 0x50;
	TMOD = 0x20;
	TH1 = 0xFD;
	TL1 = 0xFD;
	TR1 = 1;
	
	IE=0x87;
	IT0 = 1;
	IT1 = 1;
	TMOD = 0x00; // 13 bit timer
	TR0 = 1;
	while(1)
	{
		while(!RI);
		current = SBUF;
		RI = 0;
		
		
		hund = current/100;
		
		temp = current%100;
		tens= temp/10;
		ones = temp%10;
		//P0=a[ones];
		
		
	}
}
#define DELAY 150
void display() interrupt 1 
{
	ones_sw = 1;
	P0 = a[ones];
	delay(DELAY);
	ones_sw = 0;
	
	tens_sw = 1;
	P0 = a[tens];
	delay(DELAY);
	tens_sw = 0;
	
	hund_sw = 1;
	P0 = a[hund];
	delay(DELAY);
	hund_sw = 0;
	
	thou_sw = 1;
	P0 = a[thou];
	delay(DELAY);
	thou_sw = 0;
}