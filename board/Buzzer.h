#ifndef BUZZER_H
#define BUZZER_H

#include "mbed.h"

class Buzzer{

    public:
    Buzzer(PinName buzzerPin);
    void playNote(float frequency, float duration = 100, float volume = 1.0);
    void startupBeep();
    
    private:
    
    
    PwmOut out;
};

#endif