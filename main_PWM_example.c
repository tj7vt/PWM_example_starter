#include <ti/devices/msp432p4xx/driverlib/driverlib.h>
#include "main_PWM_example.h"
#include "initialize.h"
#include "GPIO_HAL.h"
#include "timer32_HAL.h"

int main(void)
{
    // TODO: Initialize everything.


    // TODO: Initialize the state variables: button states, button histories, duty cycle value.

    while(1)
    {
        // TODO: Take a 1 ms period sample of BoosterPack button S2


        // TODO: State Machine for Button 1
        // - On each debounced MAKE, increase the duty cycle.
        // - On each debounced BREAK, update the value of CCR0 to restart the count at the new duty cycle.


        // TODO: State Machine for Button 2
        // - On each debounced MAKE, decrease the duty cycle.
        // - On each debounced BREAK, update the value of CCR0 to restart the count at the new duty cycle.

    }
}
