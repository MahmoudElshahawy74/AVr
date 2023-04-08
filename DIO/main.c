/*
 * main.c
 *
 *  Created on: Apr 6, 2023
 *      Author: Ultimate
 */

#include <avr/io.h>
#include <util/delay.h>
int main(void){
	DDRA =0b00001111;// PA0 --PA3 --->OUTPUT
		while(1) // super loop
	{
			PORTA=0b00000001;
			_delay_ms(500);
			for(int i=1;i<=3;i++){
				PORTA=PORTA<<1;
				_delay_ms(500);
			}
/////////////////////////////////////////////////////////////////
			/*PORTA =0b00000001;// PA0 ---->HIGH (5 V)
			_delay_ms(1000);
			PORTA =0b00000000;// PA0 ---->LOW
			_delay_ms(1000);
*/


	}
	return 0;
}
