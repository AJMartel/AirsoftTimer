#include "Buzzer.h"
#include "mbed.h"

Buzzer::Buzzer(PinName buzzerPin) : out(buzzerPin){
    out = 0.0;    
}

void Buzzer::startupBeep(){
    
}

void Buzzer::playNote(float frequency, float duration, float volume){
        out.period(1.0/frequency);
        out = volume/2.0;
        wait_ms(duration);
        out = 0.0;    
}