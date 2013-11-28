#ifndef OBJECT_H
#define OBJECT_H
#include "Observable.h"
#include "DisplayableElement.h"

class Mark: public Observable, public DisplayableElement
{
private:

public:
    int x;
    int y;
    int angle;

    Mark();
    void setPositionDirection(int, int, int);
    virtual void display();



};

#endif // OBJECT_H

