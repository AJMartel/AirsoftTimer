#include "Keyboard.h"


Keyboard::Keyboard(KeyboardPins keyboardPins) : Keypad(
        keyboardPins.rows[0], keyboardPins.rows[1], keyboardPins.rows[2], keyboardPins.rows[3],
        keyboardPins.cols[0], keyboardPins.cols[1], keyboardPins.cols[2], NC
        ){
}

const char Keyboard::KEYTABLE[] = { '1','2','3',
                                     '4','5','6',
                                     '7','8','9',
                                     '*','0','#'
};

