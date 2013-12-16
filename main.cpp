
#include <stdio.h>
#include "Controller.h"
#include "View.h"
#include "Path.h"
#include "Mark.h"
#include "BlinkedMark.h"
#include "Net.h"
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <GL/glut.h>
//#include <glu.h>

int WindW = 800;
int WindH = 600;
Mark *mark = new BlinkedMark();
Controller controller(mark);



void init()
{
    glOrtho(0.0, 800.0, 600.0, 0.0, -1, 1);
}

void idleFunc()
{
    glutPostRedisplay();
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    View::display();
    glutSwapBuffers();
}

void reshape(int width, int height)
{
        glViewport(0, 0, width, height);
        glMatrixMode(GL_PROJECTION);
        glLoadIdentity();

        WindW = width;
        WindH = height;
}

void mouseClick(int button, int state, int x, int y)
{
    if(button == GLUT_LEFT_BUTTON && state == GLUT_UP)
    {
        int xx = (800 / (float)WindW) * x;
        int yy = (600 / (float)WindH) * y;
        controller.click(xx, yy);
        display();
    }
}

int main(int argc, char** argv)
{

    glutInit(&argc, argv);
    glutInitWindowSize(800, 600);
    glutCreateWindow("GLUT Test");

    init();
    glutReshapeFunc(&reshape);
    glutDisplayFunc(&display);
    glutMouseFunc(&mouseClick);
    glutIdleFunc(idleFunc);

    srand(time(NULL));

    Path *path = new Path(mark);
    Net *net = new Net(WindW, WindH, 16.0f, 12.0f);

    View::getInstance()->addElement(net);
    View::getInstance()->addElement(mark);
    View::getInstance()->addElement(path);

    mark->addObserver(View::getInstance());
    mark->addObserver(path);

    glutMainLoop();

    return 0;
}

// разобраться с синхронизацией

