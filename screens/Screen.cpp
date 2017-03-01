#include "Screen.h"

using namespace AirsoftTimer;

Screen::Screen(Board* board){
    this->board = board;
    update_display = true;
}

void Screen::update(){
    update_display = true;
}

void Screen::show(){
    update_display = false;    
}