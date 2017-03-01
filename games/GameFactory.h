#ifndef GAMEFACTORY_H
#define GAMEFACTORY_H

#include "../board/Board.h"
#include "Game.h"

class GameFactory{
    public:
    static Game* create(Board* board, int choice); //factory method

};


#endif