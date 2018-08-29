
#include <LEDs_and_SWs.h>
#include <stdio.h>
#include "board.h"
#include "peripherals.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "MK64F12.h"
#include "fsl_debug_console.h"


int main(void) {

	uint8_t pin_value_sw2 = CLEAR_PIN;
	uint8_t pin_value_sw3 = CLEAR_PIN;

	BOARD_InitBootPins();


    while(1) {


    	pin_value_sw3 = SW_read_pin(SW3);
    	pin_value_sw2 = SW_read_pin(SW2);

    	if(FALSE == pin_value_sw3 && TRUE == pin_value_sw2)
    	{
    		Led_green_on_off(LED_ON);
    	}
    	else
    	{
    		Led_green_on_off(LED_OFF);
    	}

    	if(FALSE == pin_value_sw2 && TRUE == pin_value_sw3)
    	{
    		Led_red_on_off(LED_ON);
    	}
    	else
    	{
    		Led_red_on_off(LED_OFF);
    	}

    	if(FALSE == pin_value_sw2 && FALSE == pin_value_sw3)
    	{
    		Led_blue_on_off(LED_ON);
    	}
    	else
    	{
    		Led_blue_on_off(LED_OFF);
    	}


    }
    return 0 ;
}
