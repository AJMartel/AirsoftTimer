#ifndef BUTTON_H
#define BUTTON_H

#include "mbed.h"

class Button : public DigitalIn{
    public:
    Button(PinName buttonPin);
    operator int();
    
    protected: 
    //InterruptIn* _interrupt;

};

#endif