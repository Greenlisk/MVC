#include "Controller.h"
#include<stdlib.h>
#include<time.h>

enum Event {NEW_MARK, DESTROYED, MOVED};

Controller::Controller(Mark *mark)
{
    this->mark = mark;
}

void Controller::generateEvent()
{

    Event event = MOVED;

    switch(event) {
//    case NEW_MARK:
//        this->create_new_mark();
//        break;
//    case DESTROYED:
//        break;
    case MOVED:

        move(rand() % 100, rand() % 100, rand() % 360);
        break;
    default: break;

    }
}

void Controller::move(int x, int y, int angle)
{
    mark->setPositionDirection(x, y, angle);
}

//void Controller::create_new_mark()
//{
//    Mark *mark = new Mark();
//    view.add(mark);
//};
