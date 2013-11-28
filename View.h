#ifndef VIEW_H
#define VIEW_H
#include "Observer.h"
#include "Mark.h"
#include "Net.h"
#include "Path.h"
#include "DisplayableElement.h"

class View : public Observer, public DisplayableElement
{
    Mark *mark;
    int x, y;
    Net *net;
    Path *path;

public:
    View(Mark*, Net*, Path*);
    void drawNet();
    void drawObject();
    void drawPath();
    void display();
    void notify();
};

#endif // VIEW_H
