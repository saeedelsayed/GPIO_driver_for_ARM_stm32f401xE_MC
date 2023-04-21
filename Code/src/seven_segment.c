#include "seven_segment.h"



void SevenSegment_Init()
{
	GPIO_ConfigPin(SevenSegment_PORT_ID, SevenSegment_PINA_ID, PIN_OUTPUT, STATE_OUTPUT_PUSH_PULL);
	GPIO_ConfigPin(SevenSegment_PORT_ID, SevenSegment_PINB_ID, PIN_OUTPUT, STATE_OUTPUT_PUSH_PULL);
	GPIO_ConfigPin(SevenSegment_PORT_ID, SevenSegment_PINC_ID, PIN_OUTPUT, STATE_OUTPUT_PUSH_PULL);
	GPIO_ConfigPin(SevenSegment_PORT_ID, SevenSegment_PIND_ID, PIN_OUTPUT, STATE_OUTPUT_PUSH_PULL);
	GPIO_ConfigPin(SevenSegment_PORT_ID, SevenSegment_PINE_ID, PIN_OUTPUT, STATE_OUTPUT_PUSH_PULL);
	GPIO_ConfigPin(SevenSegment_PORT_ID, SevenSegment_PINF_ID, PIN_OUTPUT, STATE_OUTPUT_PUSH_PULL);
	GPIO_ConfigPin(SevenSegment_PORT_ID, SevenSegment_PING_ID, PIN_OUTPUT, STATE_OUTPUT_PUSH_PULL);
}


void SevenSegment_DisplayNumber(uint8 num)
{
	switch(num)
	{
	case 0:
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PINA_ID, LOGIC_HIGH);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PINB_ID, LOGIC_HIGH);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PINC_ID, LOGIC_HIGH);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PIND_ID, LOGIC_HIGH);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PINE_ID, LOGIC_HIGH);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PINF_ID, LOGIC_HIGH);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PING_ID, LOGIC_LOW);
		break;
	case 1:
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PINA_ID, LOGIC_LOW);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PINB_ID, LOGIC_LOW);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PINC_ID, LOGIC_LOW);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PIND_ID, LOGIC_LOW);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PINE_ID, LOGIC_HIGH);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PINF_ID, LOGIC_HIGH);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PING_ID, LOGIC_LOW);
		break;
	case 2:
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PINA_ID, LOGIC_HIGH);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PINB_ID, LOGIC_HIGH);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PINC_ID, LOGIC_LOW);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PIND_ID, LOGIC_HIGH);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PINE_ID, LOGIC_HIGH);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PINF_ID, LOGIC_LOW);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PING_ID, LOGIC_HIGH);
		break;
	case 3:
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PINA_ID, LOGIC_HIGH);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PINB_ID, LOGIC_HIGH);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PINC_ID, LOGIC_HIGH);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PIND_ID, LOGIC_HIGH);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PINE_ID, LOGIC_LOW);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PINF_ID, LOGIC_LOW);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PING_ID, LOGIC_HIGH);
		break;
	case 4:
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PINA_ID, LOGIC_LOW);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PINB_ID, LOGIC_HIGH);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PINC_ID, LOGIC_HIGH);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PIND_ID, LOGIC_LOW);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PINE_ID, LOGIC_LOW);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PINF_ID, LOGIC_HIGH);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PING_ID, LOGIC_HIGH);
		break;
	case 5:
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PINA_ID, LOGIC_HIGH);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PINB_ID, LOGIC_LOW);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PINC_ID, LOGIC_HIGH);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PIND_ID, LOGIC_HIGH);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PINE_ID, LOGIC_LOW);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PINF_ID, LOGIC_HIGH);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PING_ID, LOGIC_HIGH);
		break;
	case 6:
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PINA_ID, LOGIC_LOW);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PINB_ID, LOGIC_LOW);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PINC_ID, LOGIC_HIGH);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PIND_ID, LOGIC_HIGH);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PINE_ID, LOGIC_HIGH);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PINF_ID, LOGIC_HIGH);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PING_ID, LOGIC_HIGH);
		break;
	case 7:
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PINA_ID, LOGIC_HIGH);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PINB_ID, LOGIC_HIGH);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PINC_ID, LOGIC_HIGH);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PIND_ID, LOGIC_LOW);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PINE_ID, LOGIC_LOW);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PINF_ID, LOGIC_LOW);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PING_ID, LOGIC_LOW);
		break;
	case 8:
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PINA_ID, LOGIC_HIGH);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PINB_ID, LOGIC_HIGH);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PINC_ID, LOGIC_HIGH);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PIND_ID, LOGIC_HIGH);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PINE_ID, LOGIC_HIGH);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PINF_ID, LOGIC_HIGH);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PING_ID, LOGIC_HIGH);
		break;
	case 9:
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PINA_ID, LOGIC_HIGH);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PINB_ID, LOGIC_HIGH);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PINC_ID, LOGIC_HIGH);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PIND_ID, LOGIC_LOW);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PINE_ID, LOGIC_LOW);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PINF_ID, LOGIC_HIGH);
		GPIO_WritePin(SevenSegment_PORT_ID, SevenSegment_PING_ID, LOGIC_HIGH);
		break;

	}
}
