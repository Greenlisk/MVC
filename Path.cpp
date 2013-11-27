#include "Path.h"
#include <stdio.h>

using namespace std;


Path::Path(Mark *mark)
{
    this->mark = mark;
}



void Path::notify()
{
    x.push_back(mark->x);
    y.push_back(mark->y);
    generatePoints();
    printPoints();

}

void Path::printPoints()
{
    printf("Path points:\n");
    printf("x:   y:\n");
    for (int i = 0; i < x.size(); i++)
    {
        printf("%i  %i\n", x[i], y[i]);
    }
    printf("\n");
}

void Path::generatePoints()
{}
