#ifndef LCD_H
#define LCD_H

#include "TextLCD.h"

struct LcdPins{
    PinName rs;
    PinName e;
    PinName p4;
    PinName p5;
    PinName p6;
    PinName p7;    
};

class LCD : public TextLCD{
    
    public:
    LCD(PinName rs, PinName e, PinName d4, PinName d5, PinName d6, PinName d7, LCDType type = LCD16x2);
    void showLogo(const char** logo);
    
    private:
    void load_special_chars();
    
};


#endif