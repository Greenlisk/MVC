#include "Mark.h"

Mark::Mark()
{
}

void Mark::setPositionDirection(int x, int y, int angle)
{
    this->x = x;
    this->y = y;
    this->angle = angle;

    notify_all();
}
