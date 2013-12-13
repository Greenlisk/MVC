#ifndef NET_H
#define NET_H
#include "DisplayableElement.h"

class Net : public DisplayableElement
{
    float width;
    float height;
    int cellNumHor;
    int cellNumVert;

public:
    Net(float width, float height, int cellNumHor, int cellNumVert);
    void display();
    void drawCell(float left, float down);
};

#endif // NET_H
