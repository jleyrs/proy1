
#include <LEDs_and_SWs.h>
#include <stdio.h>
#include "board.h"
#include "peripherals.h"
#include "pin_mux.h"
#include "clock_config.h"
#include "MK64F12.h"
#include "fsl_debug_console.h"


extern uint8_t Flag_sw3;
extern uint8_t Flag_sw2;

int main(void) {

	BOARD_InitBootPins();
	uint8_t aux1=0;
    while(1) {
for(aux1=0; aux1<4; aux1++)
{
    	if(TRUE == Flag_sw3 && aux1==0)
    	{
    		Led_red_on_off(LED_ON);
    		Flag_sw3 = FALSE;
    	}

    	else if(TRUE == Flag_sw3 && aux1==1)
    	{
    	     Led_blue_on_off(LED_ON);
    	     Flag_sw3 = FALSE;
    	}

    	else if(TRUE == Flag_sw3 && aux1==2)
    	{
    	     Led_green_on_off(LED_ON);
    	     Flag_sw3 = FALSE;
    	}


    	else if(TRUE == Flag_sw2)
    	  {
    	    Led_red_on_off(LED_OFF);
    	    Flag_sw2 = FALSE;
    	   }
}

    }
    return 0 ;
}
