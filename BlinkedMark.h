#ifndef BLINKEDMARK_H
#define BLINKEDMARK_H

#include "Mark.h"

class BlinkedMark: public Mark
{
private:
    int state;
    bool regression;
    void drawState();
    void changeState();
public:
    BlinkedMark();
    void display();

};

#endif // BLINKEDMARK_H
