/*
 * ledMATRIX8x8.h
 *
 *  Created on: Oct 11, 2023
 *      Author: tanta
 */

#ifndef INC_LEDMATRIX8X8_H_
#define INC_LEDMATRIX8X8_H_

#include "main.h"

void updateBuffer(uint8_t input[8]);
void displayLEDMATRIX (int index);
void updateLEDMatrix (int index );
void LEDMATRIX_run(uint8_t input[8]);
void shiftLeftMatrix();

#endif /* INC_LEDMATRIX8X8_H_ */
