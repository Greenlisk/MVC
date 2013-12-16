#ifndef VIEW_H
#define VIEW_H
#include "Observer.h"
#include <vector>
#include "DisplayableElement.h"

class View : public Observer
{
    std::vector<DisplayableElement *> elements;

public:
    View();
    static void display();
    static View* getInstance();
    void notify();
    void addElement(DisplayableElement *element);
};

#endif // VIEW_H
