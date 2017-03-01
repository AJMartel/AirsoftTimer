#include "LCD.h"

LCD::LCD(PinName rs, PinName e, PinName d4, PinName d5, PinName d6, PinName d7, LCDType type) : TextLCD(rs, e, d4, d5, d6, d7, type) {
    //load special characters in memory
    load_special_chars();
}

void LCD::showLogo(const char** logo){
    for(int line = 0; line < 4; line++){
        this->locate(0,line);
        this->printf(logo[line]);    
    }    
}

void LCD::load_special_chars(){
    char special_chars[8][8] = {
        {0x0,0x8,0xc,0xe,0xc,0x8,0x0},      // [0] arrow right
        {0x0,0x2,0x6,0xe,0x6,0x2,0x0},      // [1] arrow left
        {0x0,0x0,0x4,0xe,0x1f,0x0,0x0},     // [2] arrow up
        {0x0,0x0,0x1f,0xe,0x4,0x0,0x0},     // [3] arrow down
        {0x0,0xe,0x15,0x17,0x11,0xe,0x0},   // [4] clock
        {0x1,0x3,0xf,0xf,0xf,0x3,0x1},      // [5] speaker
        {0x8,0x10,0x0,0x18,0x0,0x10,0x8},   // [6] speaker on
        {0x0,0x1,0x3,0x16,0x1c,0x8,0x0}     // [7] check mark
    };
    for(int i = 0; i < 8; i++){
        this->putCustomChar(i,special_chars[i]); 
    }    
}
