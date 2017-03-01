
#include "Airsofttimer.h"
#include "games/GameSelector.h"

//    buttonPin   = P0_4;    //P0.4
//    keyPin      = P0_5;    //P0.5
//    ledAPin     = P2_4;    //P2.4
//    ledBPin     = P2_5;    //P2.5
//    buzzerPin   = P2_3;    //P2.3
//    keyboardRowPins = {P0_8 , P0_9 , P0_10, P0_11};              // ROWS=P0.8 -> P0.11
//    keyboardColPins = {P0_16, P0_17, P0_18};                     // COLS=P0.16 -> P0.18
//    lcdPins      = {P1_31, P1_30, P0_23, P0_24, P0_23, P0_26};   // E=P1.31, RS=P1.30, D4=P0.23 -> D7=P0.26

Airsofttimer::Airsofttimer(Pinouts pinouts){
    board = new Board(pinouts);   
    init();
    start();
}

const char* Airsofttimer::LOGO[16] = {
    "    \xFF\xFF\xFF  \xFF  \xFF\xFF\xFF", 
    "    \xFF \xFF  \xFF  \xFF", 
    "    \xFF\xFF\xFF  \xFF  \xFF",  
    "    \xFF    \xFF  \xFF\xFF\xFF"
};

void Airsofttimer::init(){
    board->buzzer->startupBeep();
    board->lcd->cls();
    board->lcd->showLogo(LOGO);
    wait(3.0);
    board->lcd->cls(); 
}

void Airsofttimer::start(){
    while(true){
        // first we need to select a game from the available games list
        int game_number = select_game();
        Game* game = GameFactory::create(board, game_number);
        game->setup();
        game->run();
        delete game;
    }
}

// show a list of games, and select one
int Airsofttimer::select_game(){
    GameSelector* selector = new GameSelector(board);
    return selector->select();
}