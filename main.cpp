#include "mbed.h"

int main()
{
    // Initialise the digital pin BUTTON1 (the blue button) as an input
    DigitalIn button(BUTTON1);

    // Loop forever...
    while (true) {
        // Is the button being pressed?
        if (button == true) {
            printf("Button is up\n");
        } else {
            printf("Button is down\n");
        }    
        // Wait for 500ms
        thread_sleep_for(500);
    }
}
