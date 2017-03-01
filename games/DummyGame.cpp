#include "DummyGame.h"
#include "../objectives/ObjectiveFactory.h"

const char* NAME = "DummyGame";

DummyGame::DummyGame(Board* board) : Game(board){
    
}

void DummyGame::setup(){
    objectives.push_back(ObjectiveFactory::create(this, 0));
    objectives.push_back(ObjectiveFactory::create(this, 0));
}

void buttonEvent(char c){
    
}
