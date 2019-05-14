#include <reg51.h>

unsigned char c;

sbit shutter = P2 ^ 0;

void delay(unsigned int x) {
  while (x--);
}

unsigned char serial[] = "SHUTTER OPENED";

unsigned char serial1[] = "SHUTTER CLOSED";
unsigned int i,d;

void main() {

  SCON = 0x50;
  TMOD = 0x20;
  TH1 = 0xFD;
  TL1 = 0xFD;
  TR1 = 1;

  while (1) {
    if (shutter == 0) 
			{
      delay(20000);
      if (shutter == 0) 
				{
				d =0x80;
        P0 = d;
        for (i = 0; i <= 13; i++) 
					{
          SBUF = serial[i];
          while (!TI);
          TI = 0;

        }
      }
      SBUF = 0x0D;
      while (!TI);
      TI = 0;

      SBUF = 0x0A;
      while (!TI);
      TI = 0;
			
			

    }
		
		while(!RI);
		c = SBUF;
		RI=0;
		
		if(c == 0x42)
		{
			if(d == 0x80)
			{
				for (i = 0; i <= 13; i++) 
				{
          SBUF = serial[i];
          while (!TI);
          TI = 0;

        }
			}
			else 
			{
				for (i = 0; i <= 13; i++) 
				{
          SBUF = serial1[i];
          while (!TI);
          TI = 0;

        }
			}
					SBUF = 0x0D;
				while (!TI);
				TI = 0;

				SBUF = 0x0A;
				while (!TI);
				TI = 0;
			
		}

  }
}