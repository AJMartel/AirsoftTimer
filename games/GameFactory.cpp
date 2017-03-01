#include "GameFactory.h"
#include "DummyGame.h"

Game* GameFactory::create(Board* board, int choice){
    Game* game = new DummyGame(board);
    return  game;
}