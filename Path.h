#ifndef PATH_H
#define PATH_H
#include <vector>
#include "Observer.h"
#include "Mark.h"

class Path : public Observer
{
    Mark* mark;
    vector<int> x;
    vector<int> y;
public:
    Path(Mark*);
    void generatePoints();
    void notify();
    void printPoints();
};

#endif // PATH_H
