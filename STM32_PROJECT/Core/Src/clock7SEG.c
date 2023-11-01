/*
 * clock7SEG.c
 *
 *  Created on: Oct 10, 2023
 *      Author: tanta
 */

#include "clock7SEG.h"

int MAX_LED = 4;
int index_led = 0;
int led_buffer[4] = {1, 2, 3, 4};
int hour = 15, minute = 9, second = 52;

void clearLed(){
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6 | GPIO_PIN_7 | GPIO_PIN_8 | GPIO_PIN_9, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3|GPIO_PIN_4|GPIO_PIN_5|GPIO_PIN_6, GPIO_PIN_SET);
}

void display7SEG(int num){
	char led7seg[10] = {0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90};
	for (int i = 0; i < 7; i++){
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0 <<i, (led7seg[num]>>i) & 1);
	}
}

void update7SEG (int index) {
	clearLed();
	if(index_led >= MAX_LED) index_led = 0;
	switch (index) {
	case 0:
		// Display the first 7 SEG with led_buffer [0]
		HAL_GPIO_WritePin(GPIOA, EN0_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, EN1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, EN2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, EN3_Pin, GPIO_PIN_SET);
		display7SEG(led_buffer[0]);
		break ;
	case 1:
		// Display the third 7 SEG with led_buffer [2]
		HAL_GPIO_WritePin(GPIOA, EN1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, EN0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, EN2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, EN3_Pin, GPIO_PIN_SET);
		display7SEG(led_buffer[1]);
		break ;
	case 2:
		// Display the forth 7 SEG with led_buffer [3]
		HAL_GPIO_WritePin(GPIOA, EN2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, EN0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, EN1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, EN3_Pin, GPIO_PIN_SET);
		display7SEG(led_buffer[2]);
		break ;
	case 3:
		HAL_GPIO_WritePin(GPIOA, EN3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(GPIOA, EN0_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, EN1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, EN2_Pin, GPIO_PIN_SET);
		display7SEG(led_buffer[3]);
		break ;
	default:
		break;
	}
}

void updateClockBuffer(void){
	//Control the hour
		if(hour < 10) {
			led_buffer[0] = 0;
			led_buffer[1] = hour;
		}
		else{
			led_buffer[1] = hour%10;
			led_buffer[0] = (hour - led_buffer[1])/10;
		}
		//Control the minute
		if(minute < 10) {
			led_buffer[2] = 0;
			led_buffer[3] = minute;
			}
		else{
			led_buffer[3] = minute%10;
			led_buffer[2] = (minute - led_buffer[3])/10;
		}
}
