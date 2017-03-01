#include "ObjectiveFactory.h"
#include "WaitForKeyObjective.h"

Objective* ObjectiveFactory::create(Game* game, int choice){
    return new WaitForKeyObjective(game);
}