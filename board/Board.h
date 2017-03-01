#ifndef BOARD_H
#define BOARD_H

#include "LCD.h" 
#include "Leds.h"
#include "Key.h"
#include "Buzzer.h"
#include "Button.h"
#include "Keyboard.h"

#include "FPointer.h"

// class for debug leds
// class for eeprom memory
// class for wireless (nordic chip or xbee)

struct Pinouts{
    PinName button;
    PinName key;
    LedPins leds;
    PinName buzzer;
    KeyboardPins keyboard;
    LcdPins lcd;
};

class Board{
    public:
    Board(Pinouts pinouts);
    
    LCD* lcd;
    Leds* leds;
    Key* key;
    Button* button;
    Keyboard* keyboard;
    Buzzer* buzzer;
    
    uint32_t keyboardButton(uint32_t index);
    
    template<class T> 
    void attach(T* item, uint32_t(T::*method)(uint32_t)){
        _callback.attach(item, method);
    }
    
    protected:
    FPointer         _callback; // Called after each input

    
};

#endif