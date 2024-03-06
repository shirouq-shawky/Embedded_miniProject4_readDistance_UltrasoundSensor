/*
 * app.c
 *
 *  Created on: Oct 19, 2023
 *      Author: Shorouk Shawky
 */



#include "lcd.h"
#include "ultraSound_driver.h"
#include <avr/io.h>
#include <util/delay.h>
int main(void){
	uint16 distance=0;
	SREG |= (1<<7);
	 LCD_init();
	 Ultrasonic_init();

	 LCD_displayString("Distance=     cm");



	 while(1){
		 LCD_moveCursor(0,10);
		 		distance = (Ultrasonic_readDistance() +2);
		 		if (distance >= 100)
		 		{
		 			LCD_intgerToString(distance);
		 		}
		 		else
		 		{
		 			LCD_intgerToString(distance);
		 			LCD_displayCharacter(' ');
		 		}
		 		_delay_ms(100);
	 }
}
