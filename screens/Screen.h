#ifndef SCREEN_H
#define SCREEN_H

#include "../board/Board.h"

namespace AirsoftTimer
{

class Screen
{
    public:
    Screen(Board* board);
    
    void show();
    void update();
    
    
    protected:
    Board* board;
    
    int update_display;


};
}

#endif