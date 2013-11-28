#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "Mark.h"

class Controller
{
    Mark *mark;
public:
    Controller(Mark*);
    //void sendData();
    void generateEvent();
    void click(int, int);
    void move(int, int, int);
};

#endif // CONTROLLER_H
