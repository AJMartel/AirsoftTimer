#include "Board.h"

Board::Board(Pinouts pinouts){
    lcd = new LCD(pinouts.lcd.rs, pinouts.lcd.e, pinouts.lcd.p4, pinouts.lcd.p5, pinouts.lcd.p6, pinouts.lcd.p7, LCD::LCD20x4);
    leds = new Leds(pinouts.leds.left, pinouts.leds.right);
    button = new Button(pinouts.button);
    key = new Key(pinouts.key);
    keyboard = new Keyboard(pinouts.keyboard);
    buzzer = new Buzzer(pinouts.buzzer);    
    
    keyboard->attach(this, &Board::keyboardButton);
    keyboard->start();  // energize the keypad via c0-c3
}

uint32_t Board::keyboardButton(uint32_t index){
    _callback.call(Keyboard::KEYTABLE[index]);
    return 0;
}

