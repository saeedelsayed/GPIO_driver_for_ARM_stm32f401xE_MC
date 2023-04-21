/*
 * seven_segment.h
 *
 *  Created on: Apr 18, 2023
 *      Author: EGYPT
 */

#ifndef SEVEN_SEGMENT_H_
#define SEVEN_SEGMENT_H_


#include "gpio.h"

#define SevenSegment_PORT_ID        PORTA_ID

#define SevenSegment_PINA_ID        PIN0_ID
#define SevenSegment_PINB_ID        PIN1_ID
#define SevenSegment_PINC_ID        PIN2_ID
#define SevenSegment_PIND_ID        PIN3_ID
#define SevenSegment_PINE_ID        PIN4_ID
#define SevenSegment_PINF_ID        PIN5_ID
#define SevenSegment_PING_ID        PIN6_ID


void SevenSegment_Init();

void SevenSegment_DisplayNumber(uint8 num);


#endif /* SEVEN_SEGMENT_H_ */
