#ifndef VIEW_H
#define VIEW_H
#include "Observer.h"

class View : public Observer
{

public:
    View();
    void drawNet();
    void drawObject();
    void drawPath();
    void notify();
};

#endif // VIEW_H
