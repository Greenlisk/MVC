#include "View.h"
#include <stdio.h>
#include <GL/glut.h>
#include <iostream>

View::View(Mark* mark, Net * net, Path * path)
{
    this->mark = mark;
    this->net = net;
    this->path = path;
}

void View::notify()
{
    x = mark->x;
    y = mark->y;
    printf("Xpos: %i Ypos: %i\n", x, y);

    drawNet();
    drawObject();
    drawPath();
}
void View::drawNet(){}
void View::drawObject(){}
void View::drawPath(){}
void View::display(){
    glColor3f(1.0f, 1.0f, 0.0f);

    unsigned int marks_number = this->path->getMarksCount();

    if(2 >= marks_number)
        return;

    glColor3f(1.0f, 0.0f, 1.0f);
    glBegin(GL_LINE_STRIP);

    for(unsigned int i = 0; i < marks_number; i++)
    {

        DirectionalPoint *point = this->path->get(i);
        printf("display %i\n", 12);
        printf("CC->%f:%f", point->getX(), point->getY());
        glVertex2f(point->getX(), point->getY());
    }
    glEnd();
}
