#ifndef WAITFORKEYOBJECTIVE_H
#define WAITFORKEYOBJECTIVE_H

#include "Objective.h"

class WaitForKeyObjective : public Objective{
        
    public:
    WaitForKeyObjective(Game* game);
    virtual void run();
    void buttonEvent(char c);
    
};


#endif