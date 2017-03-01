#include "Leds.h"


Leds::Leds(PinName leftPin, PinName rightPin) : leftLed(leftPin), rightLed(rightPin){
    off(ALL);
}

void Leds::on(Leds::LedName ledname){
    switch(ledname){
        case LEFT:
            leftLed.write(1);
            break;
        case RIGHT:
            rightLed.write(1);
            break;
        case ALL:
            leftLed.write(1);
            rightLed.write(1);
            //break:
    }
}

void Leds::off(Leds::LedName ledname){
    switch(ledname){
        case LEFT:
            leftLed.write(0);
            break;
        case RIGHT:
            rightLed.write(0);
            break;
        case ALL:
            leftLed.write(0);
            rightLed.write(0);
            //break:
    }
}