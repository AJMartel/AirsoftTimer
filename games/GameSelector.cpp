#include "GameSelector.h"

GameSelector::GameSelector(Board* board){
    this->board = board;
    this->board->attach(this, &GameSelector::buttonEvent);
    titles[0] = "Hold it";
    titles[1] = "Capture the bomb";
    titles[2] = "Hurry up";
    titles[3] = "Search & destroy";
    titles[4] = "Simple timer";
    titles[5] = "DummyGame 6";
    titles[6] = "DummyGame 7";
    total_selections = 7;  
    current_selection = 0;
    start_position = 0;
    selected_game = -1;
    
    update_screen = false;
}

int GameSelector::select(){
    print_list();
    while(selected_game == -1){
        if(update_screen){
            print_list();    
        }
    } // wait until selection is done
    return selected_game;
}

uint32_t GameSelector::buttonEvent(uint32_t c){
    switch(c){
        case '2':
            go_up();
            update_screen = true;
            break;
        case '5':
            selected_game = current_selection;
            break;
        case '8':
            go_down();
            update_screen = true;
            break;
        default:
            break;  
    }
    return 0;
}

void GameSelector::print_list(){
    board->lcd->cls();
    for(int i = 0; i < 4; i++){
        board->lcd->locate(2,i);
        board->lcd->printf(titles[i+start_position]);
    }
    print_selection_arrow();
    print_up_down_arrows();
    
    update_screen = false;
}

void GameSelector::print_up_down_arrows(){
    if(start_position != 0){
        board->lcd->locate(19,0);
        board->lcd->putc('\x02');
    }
    if(start_position < total_selections - 4){
        board->lcd->locate(19,3);
        board->lcd->putc('\x03');
    }
}

void GameSelector::print_selection_arrow(){
    int line = current_selection - start_position;
    board->lcd->locate(0,line);
    board->lcd->putc('\x00');
}

void GameSelector::go_down(){
    if(current_selection < (total_selections - 1)){
        current_selection++;
    }
    if(current_selection - start_position >= 4){
        start_position = current_selection - 3;
    }
    //print_list();
}

void GameSelector::go_up(){
    if(current_selection > 0){
        current_selection--;
    }
    if(current_selection - start_position < 0){
        start_position = current_selection;
    }
    //print_list();
}
