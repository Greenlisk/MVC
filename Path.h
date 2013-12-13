#ifndef PATH_H
#define PATH_H
#include <vector>
#include "Observer.h"
#include "Mark.h"
#include "DirectionalPoint.h"

class Path : public Observer, public DisplayableElement
{
    Mark* mark;
    vector<DirectionalPoint*> points;
    unsigned int amount;
public:
    Path(Mark*);
    void generatePoints();
    void notify();
    void printPoints();
    void display();

    unsigned int getMarksCount();

    DirectionalPoint *get(unsigned int i);

};

#endif // PATH_H
