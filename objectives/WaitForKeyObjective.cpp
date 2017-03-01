
#include "WaitForKeyObjective.h"
#include "../games/Game.h"

WaitForKeyObjective::WaitForKeyObjective(Game* game) : Objective(game){
    //keyboard->attach(this, &WaitForKeyObjective::buttonEvent);
}

void WaitForKeyObjective::run(){  

    
    //wait until completed
    while(getStatus() != COMPLETED){}
}

void WaitForKeyObjective::buttonEvent(char c){
    // complete objective if a button is pressed
    complete();
}