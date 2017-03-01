#ifndef OBJECTIVE_H
#define OBJECTIVE_H

// Forward Declarations
class Game;
class LCD;
class Leds;
class Key;
class Button;
class Keyboard;
class Buzzer;

class Objective /*: public ButtonListener*/{
    
    
    public:
    Objective(Game* game);
    
    enum Status { WAITING, ACTIVE, COMPLETED };
    Status getStatus();
    
    void start();
    virtual void run() = 0;
    void complete();
    
    protected:    
    Game* game;
    
    LCD* lcd;
    Leds* leds;
    Key* key;
    Button* button;
    Keyboard* keyboard;
    Buzzer* buzzer;
       
    private:
    volatile Status status;
    
};


#endif