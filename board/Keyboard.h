#ifndef KEYBOARD_H
#define KEYBOARD_H

#include "mbed.h"
#include "Keypad.h"

struct KeyboardPins{
    PinName rows[4];
    PinName cols[3];
};



class Keyboard : public Keypad{
    public:
    Keyboard(KeyboardPins keyboardPins); 
      
    template<class T> 
    void attach(T* item, uint32_t(T::*method)(uint32_t)){
        _callback.attach(item, method);
    }
    
    static const char KEYTABLE[];
    
    private: 
    
};

#endif