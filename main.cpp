#include "mbed.h"


#include "Airsofttimer.h"
#include "TextLCD.h"

PinName buttonpin = P0_5;
PinName keypin = P0_4;
PinName buzzerpin = P2_3;
LedPins ledpins = {P2_4, P2_5}; // left, right
KeyboardPins keyboardpins = {{P0_8, P0_9, P0_10, P0_11}, {P0_16, P0_17, P0_18}};
LcdPins lcdpins = {P1_30, P1_31, P0_23, P0_24, P0_25, P0_26};

Pinouts pinouts = {
    buttonpin,
    keypin,
    ledpins, 
    buzzerpin, 
    keyboardpins,
    lcdpins
};

int main()
{
    Airsofttimer airsofttimer(pinouts);
}


//DigitalOut heartbeatLed(LED1);
//DigitalOut led2(LED2);
//DigitalOut led3(LED3);
//DigitalOut led4(LED4);

