#include "Path.h"
#include <stdio.h>
#include <iostream>

using namespace std;


Path::Path(Mark *mark)
{
    this->mark = mark;
    this->amount = 0;
}



void Path::notify()
{
    DirectionalPoint *point = new DirectionalPoint(mark->x, mark->y, mark->angle);
    this->points.push_back(point);
    std::cout<<"Path:amount="<<this->amount<<std::endl;
    std::cout<<"Path:amount="<<this<<std::endl;
    amount++;

    generatePoints();
    printPoints();

}

void Path::printPoints()
{
    printf("Path points:\n");
    printf("x:   y:\n");
    for (unsigned int i = 0; i < points.size(); i++)
    {
        printf("%f  %f\n", points[i]->getX(), points[i]->getY());
    }
    printf("\n");
}

void Path::generatePoints()
{}


unsigned int Path::getMarksCount()
{
    std::cout<<"Path:amount="<<this->amount<<std::endl;
    std::cout<<"Path:amount="<<this<<std::endl;

    return this->amount;
}
DirectionalPoint *Path::get(unsigned int i) {return points[i];}
