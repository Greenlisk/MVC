#ifndef NET_H
#define NET_H
#include "DisplayableElement.h"

class Net : public DisplayableElement
{
    float width;
    float height;
    float cellWidth;
    float cellHeight;

public:
    Net(float width, float height, float cellWidth, float cellHeight);
    void display();
    void drawCell(float left, float down);
};

#endif // NET_H
