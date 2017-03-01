
#include "Objective.h"
#include "../games/Game.h"


Objective::Objective(Game* game){
    this->game = game;
    Board* board = game->getBoard();
    lcd = board->lcd;
    leds = board->leds;
    key = board->key;
    button = board->button;
    keyboard = board->keyboard;
    buzzer = board->buzzer;
        
    status = WAITING;    
}

Objective::Status Objective::getStatus(){
    return status;   
}

void Objective::start(){
    while(status != COMPLETED){
        run();
        leds->on(Leds::LEFT);
    }
}

void Objective::complete(){
    status = COMPLETED;
    leds->off(Leds::RIGHT);
}

