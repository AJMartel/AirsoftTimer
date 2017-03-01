#ifndef GAMEFACTORY_H
#define GAMEFACTORY_H

#include "../games/Game.h"
#include "Objective.h"

class ObjectiveFactory{
    public:
    static Objective* create(Game* game, int choice); //factory method

};


#endif