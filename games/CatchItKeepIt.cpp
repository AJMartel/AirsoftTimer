
#include "CatchItKeepIt.h"


static const char* NAME = "ShowBuzzer";

CatchItKeepIt::CatchItKeepIt(Board* board) : Game(board){
    Settings settings;
    settings.activation_code[0] = 1397;
    settings.activation_code[1] = 2684;
    settings.activation_code[2] = 1597;
    settings.activation_code[3] = 3579;
    settings.timeout = 60;          // 1 minute
    settings.decrease_timeout = 0;  // decrease with 0%
    settings.beep_interval = 1;     // beep every second
    settings.team_count = 2;        // start with 2 teams
}

void CatchItKeepIt::setup(){
    // number of teams
    // set timer
    // set beep interval
    // set decrease timer interval
    // uses custom codes?
}

void CatchItKeepIt::run(){
    while(true){        
        // wait for code input
        // count down and beep
        // wait for code
        // repeat
        // don't return from this function yet (only if the game ends);   
    }
}

void end(){
    // show winner
}