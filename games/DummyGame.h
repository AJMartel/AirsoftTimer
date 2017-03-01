#ifndef DUMMYGAME_H
#define DUMMYGAME_H

#include "Game.h"

class DummyGame : public Game{
    public:
    DummyGame(Board* board);
    void run();
    virtual void setup();
    
};


#endif