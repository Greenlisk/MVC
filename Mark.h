#ifndef OBJECT_H
#define OBJECT_H
#include "Observable.h"

class Mark: public Observable
{
public:
    int x;
    int y;
    int angle;

    Mark();
    void setPositionDirection(int, int, int);



};

#endif // OBJECT_H
