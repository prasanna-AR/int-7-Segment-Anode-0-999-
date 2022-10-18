/****************/
/* Author : Prasanna */
/* Date   : 16-10-2022 */
/* Filename:(0-9)int 7 segment using anode second to mintue */
/* Description : (0-9)second to mintue*/
/****************/
#include<htc.h>
#include<stdio.h>
#define _XTAL_FREQ 20000000
__CONFIG(FOSC_HS & WDTE_OFF & PWRTE_OFF & BOREN_ON & LVP_OFF);

int num [10] = {0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x98};
int i,j,k,l,m;


void main()
{
	
	TRISB=0;
	TRISD2=0;
	TRISD3=0;
	TRISD4=0;
	TRISD5=0;
	while(1)
	{
	  for (i=0; i<10; i++)
	   for (j=0; j<10; j++)
	     for (k=0; k<6; k++)
	      for (l=0; l<10; l++)
	        for(m=0; m<73; m++)
		{
			RD3=1;
			__delay_ms(5);
			RD2=0;
			RD4=0;
			RD5=0;
			PORTB=num[l];
			
			
			RD2=1;
			__delay_ms(5);
			RD4=0;
			RD3=0;
			RD5=0;
			PORTB=num[k];
			
			RD5=1;
			__delay_ms(1);
			RD4=0;
			RD3=0;
			RD2=0;
			PORTB=num[j];
		
		
			
		}
		
	}
	
}			
			
		
		
			