

#ifndef AIRSOFTTIMER_H
#define AIRSOFTTIMER_H

#include "mbed.h"
#include "board/Board.h"
#include "games/GameFactory.h"

class Airsofttimer
{
    static const char* LOGO[];
    
    public: 
    Airsofttimer(Pinouts pinouts);
    
    private:
    Board* board;
    
    void init();  
    void start();
    int select_game(); 

};

#endif