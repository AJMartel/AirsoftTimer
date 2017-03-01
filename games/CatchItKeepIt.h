
#ifndef CATCHITKEEPIT_H
#define CATCHITKEEPIT_H

#include "Game.h"

class CatchItKeepIt : public Game{
    
    public:
    CatchItKeepIt(Board* board);
    virtual void setup();
    virtual void run();
    
    protected:
    enum Team {ALPHA, BRAVO, CHARLY, DELTA};
    
    struct Settings{
        int team_count;
        int activation_code[4];
        int timeout;
        int beep_interval;
        int decrease_timeout;
    };
    
    static const int MIN_TEAMS = 2;
    static const int MAX_TEAMS = 4;
    static const int MIN_TIMEOUT = 60; // 1 minute
    static const int MAX_TIMEOUT = 60*60; // 1 hour
    static const int MIN_BEEP_INTERVAL = 0;
    static const int MAX_BEEP_INTERVAL = 10;
    static const int MIN_DECREASE_TIMEOUT = 0;
    static const int MAX_DECREASE_TIMEOUT = 75;

};


#endif