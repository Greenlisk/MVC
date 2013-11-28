#include "Net.h"
#include <GL/glut.h>
#include <iostream>

Net::Net(float width, float height, float cellWidth, float cellHeight): width(width), height(height), cellWidth(cellWidth), cellHeight(cellHeight)
{

}

void Net::display()
{
    glColor3f(1.0f, 1.0f, 1.0f);
    float baseLeft = 0;//width;
    float baseDown = 0;//heightf;

    int cellInLine = width / cellWidth;
    int cellInRow = height / cellHeight;

    std::cout<<"\nnets["<<width<<":"<<height<<"]"<<std::endl;
//    std::cout<<"\nbase["<<baseLeft<<":"<<baseDown<<"]"<<std::endl;

    for(int i = 0; i < cellInLine; i++) {
        float left = baseLeft + cellWidth * i;
        for(int j = 0; j < cellInRow; j++) {
            float down = baseDown + cellHeight * j;
            drawCell(left, down);
//            std::cout<<"\ndrawCell["<<left<<":"<<down<<"]"<<std::endl;
        }
    }

}

void Net::drawCell(float left, float down)
{
    glBegin(GL_LINES);
        glVertex2f(left, down);
        glVertex2f(left, down + this->cellHeight);


        glVertex2f(left, down + this->cellHeight);
        glVertex2f(left + this->cellWidth, down + this->cellHeight);

        glVertex2f(left + this->cellWidth, down + this->cellHeight);
        glVertex2f(left + this->cellWidth, down);
//        glVertex2f(left, down);
    glEnd();
//        glRectf(left, down, left + this->cellWidth, down + this->cellHeight);
}

