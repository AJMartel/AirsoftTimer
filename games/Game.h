#ifndef GAME_H
#define GAME_H

#include "../board/Board.h"
#include "../objectives/Objective.h"
#include <vector>

class Game /*: public ButtonListener*/{
    public:
    Game(Board* board);
    virtual ~Game();
    
    static const char* NAME;
    
    virtual void setup() = 0;
    void run();
    
    Board* getBoard();
    
    protected:
    Board* board;
    
    LCD* lcd;
    Leds* leds;
    Key* key;
    Button* button;
    Keyboard* keyboard;
    Buzzer* buzzer;
    
    vector<Objective*> objectives;
    
    void init();
    void end();
    
};


#endif