#include "Game.h"

Game::Game(Board* board){
    this->board = board;
    lcd = board->lcd;
    leds = board->leds;
    key = board->key;
    button = board->button;
    keyboard = board->keyboard;
    buzzer = board->buzzer;
    
    board->leds->off(Leds::ALL);   
}

Game::~Game(){
    
}

Board* Game::getBoard(){
    return board;
}

void Game::run(){
    for(int i = 0; i != objectives.size(); ++i){
        objectives[i]->start();
    }
}

void Game::init(){
    board->lcd->cls();
    board->lcd->printf("Starting game");
    board->lcd->locate(1,0);
    board->lcd->printf("DummyGame");
    wait(3);
}

void Game::end(){
    board->lcd->cls();
    board->lcd->printf("Ending game");
    board->lcd->locate(1,0);
    board->lcd->printf("DummyGame");
    wait(5);
}

