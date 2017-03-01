#ifndef LEDS_H
#define LEDS_H

#include "mbed.h"

struct LedPins{
    PinName left;
    PinName right;
};



class Leds{
    
    public:
    enum LedName {LEFT = 0, RIGHT = 1, ALL = 2};
    Leds(PinName leftPin, PinName rightPin);
    void on(Leds::LedName ledname);
    void off(Leds::LedName ledname);
    
    private: 
    DigitalOut leftLed;
    DigitalOut rightLed;
};
#endif