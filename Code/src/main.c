#include "GPIO.h"
#include "seven_segment.h"



int main (){

	RCC_RC |= (1<<0);

	SevenSegment_Init();

	uint8 counter =0;

		while(1)
		{
			SevenSegment_DisplayNumber(counter);
			for(int i=0; i<1000000; i++);
			counter++;
			if(counter == 10){
				counter =0;
			}
		}

	return 0;
}
