/*
 * clock7SEG.h
 *
 *  Created on: Oct 10, 2023
 *      Author: tanta
 */

#ifndef INC_CLOCK7SEG_H_
#define INC_CLOCK7SEG_H_

#include "main.h"


extern int MAX_LED;
extern int index_led;
extern int led_buffer[];
extern int hour, minute, second;


void clearLed();
void display7SEG(int num);
void update7SEG (int index);
void updateClockBuffer (void);

#endif /* INC_CLOCK7SEG_H_ */
