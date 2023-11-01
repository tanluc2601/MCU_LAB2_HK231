/*
 * ledMATRIX8x8.c
 *
 *  Created on: Oct 11, 2023
 *      Author: tanta
 */

#include "ledMATRIX8x8.h"

int MAX_LED_MATRIX = 8;
int index_led_matrix = 7;
uint8_t matrix_buffer[8];

void updateBuffer(uint8_t input[8]){
	for(int i = 0; i< MAX_LED_MATRIX; i++){
		matrix_buffer[i] = input[i];
	}
}

void displayLEDMATRIX (int index){
	int state[8];
	for(int i = 0; i<MAX_LED_MATRIX; i++){
	   if (matrix_buffer[index] & 1) state[i] = 0;
	   else state[i] = 1;
	   matrix_buffer[index] = matrix_buffer[index]>>1;
	}
	HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, state[0]);//0
	HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, state[1]);//1
	HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, state[2]);//2
	HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, state[3]);//3
	HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, state[4]);//4
	HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, state[5]);//5
	HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, state[6]);//6
	HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, state[7]);//7
}

void displayLEDMATRIX2 (int index){
	int state[8];
	for(int i = 0; i < MAX_LED_MATRIX; i++){
	   if (matrix_buffer[index] & 1) state[i] = 0;
	   else state[i] = 1;
	   matrix_buffer[index] = matrix_buffer[index]>>1;
	}
	HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, state[0]);//0
	HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, state[1]);//1
	HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, state[2]);//2
	HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, state[3]);//3
	HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, state[4]);//4
	HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, state[5]);//5
	HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, state[6]);//6
	HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, state[7]);//7
}

void updateLEDMatrix (int index ){
	switch (index){
		case 0:
				HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, 0);//0
				HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, 1);//1
				HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, 1);//2
				HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, 1);//3
				HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, 1);//4
				HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, 1);//5
				HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, 1);//6
				HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, 1);//7
				displayLEDMATRIX(index);
				break;
		case 1:
				HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, 1);//0
				HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, 0);//1
				HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, 1);//2
				HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, 1);//3
				HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, 1);//4
				HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, 1);//5
				HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, 1);//6
				HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, 1);//7
				displayLEDMATRIX(index);
				break;
		case 2:
				HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, 1);//0
				HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, 1);//1
				HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, 0);//2
				HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, 1);//3
				HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, 1);//4
				HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, 1);//5
				HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, 1);//6
				HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, 1);//7
				displayLEDMATRIX(index);
				break;
		case 3:
				HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, 1);//0
				HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, 1);//1
				HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, 1);//2
				HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, 0);//3
				HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, 1);//4
				HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, 1);//5
				HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, 1);//6
				HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, 1);//7
				displayLEDMATRIX(index);
				break;
		case 4:
				HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, 1);//0
				HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, 1);//1
				HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, 1);//2
				HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, 1);//3
				HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, 0);//4
				HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, 1);//5
				HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, 1);//6
				HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, 1);//7
				displayLEDMATRIX(index);
				break;
		case 5:
				HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, 1);//0
				HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, 1);//1
				HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, 1);//2
				HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, 1);//3
				HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, 1);//4
				HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, 0);//5
				HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, 1);//6
				HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, 1);//7
				displayLEDMATRIX(index);
				break;
		case 6:
				HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, 1);//0
				HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, 1);//1
				HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, 1);//2
				HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, 1);//3
				HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, 1);//4
				HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, 1);//5
				HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, 0);//6
				HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, 1);//7
				displayLEDMATRIX(index);
				break;
		case 7:
				HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, 1);//0
				HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, 1);//1
				HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, 1);//2
				HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, 1);//3
				HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, 1);//4
				HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, 1);//5
				HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, 1);//6
				HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, 0);//7
				displayLEDMATRIX(index);
				break;
	}
}

void updateLEDMatrix2 (int index ){
	switch (index){
		case 0:
				HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, 0);//0
				HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, 1);//1
				HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, 1);//2
				HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, 1);//3
				HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, 1);//4
				HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, 1);//5
				HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, 1);//6
				HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, 1);//7
				displayLEDMATRIX2(index);
				break;
		case 1:
				HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, 1);//0
				HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, 0);//1
				HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, 1);//2
				HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, 1);//3
				HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, 1);//4
				HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, 1);//5
				HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, 1);//6
				HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, 1);//7
				displayLEDMATRIX2(index);
				break;
		case 2:
				HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, 1);//0
				HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, 1);//1
				HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, 0);//2
				HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, 1);//3
				HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, 1);//4
				HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, 1);//5
				HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, 1);//6
				HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, 1);//7
				displayLEDMATRIX2(index);
				break;
		case 3:
				HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, 1);//0
				HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, 1);//1
				HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, 1);//2
				HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, 0);//3
				HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, 1);//4
				HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, 1);//5
				HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, 1);//6
				HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, 1);//7
				displayLEDMATRIX2(index);
				break;
		case 4:
				HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, 1);//0
				HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, 1);//1
				HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, 1);//2
				HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, 1);//3
				HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, 0);//4
				HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, 1);//5
				HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, 1);//6
				HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, 1);//7
				displayLEDMATRIX2(index);
				break;
		case 5:
				HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, 1);//0
				HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, 1);//1
				HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, 1);//2
				HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, 1);//3
				HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, 1);//4
				HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, 0);//5
				HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, 1);//6
				HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, 1);//7
				displayLEDMATRIX2(index);
				break;
		case 6:
				HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, 1);//0
				HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, 1);//1
				HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, 1);//2
				HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, 1);//3
				HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, 1);//4
				HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, 1);//5
				HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, 0);//6
				HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, 1);//7
				displayLEDMATRIX2(index);
				break;
		case 7:
				HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, 1);//0
				HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, 1);//1
				HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, 1);//2
				HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, 1);//3
				HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, 1);//4
				HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, 1);//5
				HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, 1);//6
				HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, 0);//7
				displayLEDMATRIX2(index);
				break;
	}
}

void LEDMATRIX_run(uint8_t input[8]){
	updateBuffer(input);
	//updateLEDMatrix(index_led_matrix++);
	//if(index_led_matrix == MAX_LED_MATRIX) index_led_matrix = 0;
	updateLEDMatrix2(index_led_matrix--);
	if(index_led_matrix < 0) index_led_matrix = 7;
}
