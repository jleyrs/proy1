


#ifndef LEDS_AND_SWS_H_
#define LEDS_AND_SWS_H_

#include <stdint.h>

#define LED_ON (1u)
#define LED_OFF (0u)

#define SW3 (1u)
#define SW2 (0u)

#define SW3_BIT_NUMBER (4u)
#define SW2_BIT_NUMBER (6u)

#define CLEAR_PIN (5u)


#define RED_LED_BIT  (22u)
#define BLUE_LED_BIT (21u)
#define GREEN_LED_BIT (26u)


typedef enum
	{
		FALSE,
		TRUE

	} Boolean_t;

void Led_green_on_off(uint8_t on_off);
void Led_red_on_off(uint8_t on_off);
void Led_blue_on_off(uint8_t on_off);

uint8_t SW_read_pin(uint8_t switch_number);


#endif /* LEDS_AND_SWS_H_ */
