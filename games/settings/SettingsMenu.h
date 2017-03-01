#ifndef SETTINGSMENU_H
#define SETTINGSMENU_H

#include "../../board/Board.h"

class GameSelector{
    Board* board;
    void print_up_down_arrows();
    void print_selection_arrow();
    void print_list();
    
    void go_down();
    void go_up();
    
    int start_position;
    int current_selection;
    int total_selections;
    
    //char* titles[7];
    Vector<Setting> settings;
    
    public:
    GameSelector(Board* board);
    void run();
};

#endif