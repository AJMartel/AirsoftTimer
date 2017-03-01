#include "Button.h"

Button::Button(PinName buttonPin) : DigitalIn(buttonPin){
    
    
    //_interrupt = new InterruptIn(buttonPin);
    // _interrupt.rise(this, &Counter::increment); 
}

Button::operator int() {
    return read();
}