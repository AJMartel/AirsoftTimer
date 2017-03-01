#ifndef GAMESELECTOR_H
#define GAMESELECTOR_H

#include "../board/Board.h"

class GameSelector /*: public ButtonListener*/{
    Board* board;
    void print_up_down_arrows();
    void print_selection_arrow();
    void print_list();
    
    void go_down();
    void go_up();
    
    volatile int start_position;
    volatile int current_selection;
    volatile int total_selections;
    
    volatile int selected_game;
    
    char* titles[7];
    
    int update_screen;
    
    public:
    uint32_t buttonEvent(uint32_t c);
    GameSelector(Board* board);
    int select();
};

#endif