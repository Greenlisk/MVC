#include "Mark.h"
#include <cmath>
#include <GL/glut.h>
#define _USE_MATH_DEFINES

Mark::Mark()
{

}

void Mark::setPositionDirection(int x, int y, int angle)
{
    this->x = x;
    this->y = y;
    this->angle = angle;

    notify_all();
}

void Mark::display()
{
    glColor3f(1.0f, 0.0f, 0.0f);
    float xCenter = this->x;
    float yCenter = this->y;
    glBegin(GL_LINE_LOOP);
    for(int i =0; i <= 300; i++)
    {
        double angle = 2 * M_PI * i / 300;
        double x = cos(angle);
        double y = sin(angle);
        glVertex2d(xCenter + x, yCenter + y);
    }
    glEnd();

    }



//void Mark::display()
//{
//    float xCenter = this->x / 100.0d;
//    float yCenter = this->y / 100.0d;
//    glBegin(GL_LINES);
//            for(int i =0; i <= 300; i++)
//        {
//            glVertex2d(Ax, Ay);
//            glVertex2d(Bx, By);
//            glVertex2d(Cx, Cy);
//        }
//    glEnd();
//}
