


#include <LEDs_and_SWs.h>
#include "fsl_gpio.h"

void Led_green_on_off(uint8_t on_off)
{
	if(LED_ON == on_off)
	{
		 GPIO_ClearPinsOutput(GPIOE, 1u << GREEN_LED_BIT);

	}
	else
	{
		 GPIO_SetPinsOutput(GPIOE, 1u << GREEN_LED_BIT);
	}
}


void Led_red_on_off(uint8_t on_off)
{
	if(LED_ON == on_off)
	{
		 GPIO_ClearPinsOutput(GPIOB, 1u << RED_LED_BIT);

	}
	else
	{
		 GPIO_SetPinsOutput(GPIOB, 1u << RED_LED_BIT);
	}
}


void Led_blue_on_off(uint8_t on_off)
{
	if(LED_ON == on_off)
	{
		 GPIO_ClearPinsOutput(GPIOB, 1u << BLUE_LED_BIT);

	}
	else
	{
		 GPIO_SetPinsOutput(GPIOB, 1u << BLUE_LED_BIT);
	}
}


uint8_t SW_read_pin(uint8_t switch_number)
{
	uint8_t read_value;

	if(SW3 == switch_number)
	{
		read_value = GPIO_PinRead(GPIOA, SW3_BIT_NUMBER);
	}
	else
	{
		read_value = GPIO_PinRead(GPIOC, SW2_BIT_NUMBER);
	}

	return(read_value);
}
