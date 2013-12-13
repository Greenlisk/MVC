#include "Net.h"
#include <GL/glut.h>
#include <iostream>

Net::Net(float width, float height, int cellNumHor, int cellNumVert) :
    width(width),
    height(height),
    cellNumHor(cellNumHor),
    cellNumVert(cellNumVert)
{}

void Net::display()
{
    glColor3f(1.0f, 1.0f, 1.0f);
    float cellWidth = width / cellNumHor;
    float cellHeight = height / cellNumVert;
    glColor3f(0.0, 1.0, 0.0);

    for(float i = 0; i < width; i += cellWidth)
    {
        glBegin(GL_LINES);
            glVertex2f(i, 0);
            glVertex2f(i, height);
        glEnd();
    }
    for(float j = 0; j < height; j += cellHeight)
    {

        glBegin(GL_LINES);
            glVertex2f(0, j);
            glVertex2f(width, j);
        glEnd();
    }
}

