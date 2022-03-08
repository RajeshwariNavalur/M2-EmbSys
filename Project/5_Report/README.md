
#define F_CPU 8000000UL

#ifndef __AVR_ATmega8__
#define __AVR_ATmega8__
#endif 

#include <avr/io.h>
#include <util/delay.h>
#include <string.h>
#include <stdio.h>
#include <LiquidCrystal.h>
#include "LCD_16x2_H_file.h"

#define degree_sysmbol 0xdf

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{
  lcd.begin(16, 2);
}


void ADC_Init(){										
	DDRA = 0x00;	        /* Make ADC port as input */
	ADCSRA = 0x87;          /* Enable ADC, with freq/128  */
	ADMUX = 0x40;           /* Vref: Avcc, ADC channel: 0 */
}

int ADC_Read(char channel)							
{
	ADMUX = 0x40 | (channel & 0x07);   /* set input channel to read */
	ADCSRA |= (1<<ADSC);               /* Start ADC conversion */
	while (!(ADCSRA & (1<<ADIF)));     /* Wait until end of conversion by polling ADC interrupt flag */
	ADCSRA |= (1<<ADIF);               /* Clear interrupt flag */
	_delay_ms(1);                      /* Wait a little bit */
	return ADCW;                       /* Return ADC word */
}


int main()
{
	char Temperature[10];
	float celsius;

	LCD_Init();                 /* initialize 16x2 LCD*/
	ADC_Init();                 /* initialize ADC*/
    DDRD = DDRD | ( 1<<4) ; //Make pin 4 of port D as a output
    DDRC = DDRC & ~(1<<5) ; // Make pin 5 of port C as a input
	
	while(1)
	{
	   LCD_String_xy(1,0,"Temperature");
	   celsius = (ADC_Read(0)*4.88);
	   celsius = (celsius/10.00);
	   sprintf(Temperature,"%d%cC  ", (int)celsius, degree_sysmbol);/* convert integer value to ASCII string */
	   LCD_String_xy(2,0,Temperature);/* send string data for printing */
	   _delay_ms(1000);
	   memset(Temperature,0,10);

        if(PINC & (1<<5) ) //if PIN5 of port C is hi
        {
           PORTD = PORTD | ( 1<<4) ; //PIN4 of port D is high
            lcd.print("ON!");
            delay(500);
            lcd.clear();
            delay(500);
        }

        else //otherwise
        {
            PORTD = PORTD &  ~( 1<<4) ; //PIN4 of port D will remain low
            lcd.print("OFF!");
            delay(500);
            lcd.clear();
            delay(500);
        }


       

	}



    
}


 