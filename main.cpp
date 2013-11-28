
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
#include "Scene.h"
#include "GLRenderSystem.h"
#include <GL/glut.h>
#include <GL/glu.h>

int WindW = 800;
int WindH = 600;
Mark *mark = new BlinkedMark();
Controller controller(mark);

void init()
{
    //glClearColor(1.0, 1.0, 1.0, 0.0);
    glOrtho(0.0, 800.0, 600.0, 0.0, -1, 1);
}

void idleFunc()
{
    glutPostRedisplay();
}

void display()
{
    GLRenderSystem::getInstance()->clear();
    Scene::display();
    GLRenderSystem::getInstance()->swapBuffers();
}

void reshape(int width, int height)
{
//    if (height==0)                              // Prevent A Divide By Zero By
//    {
//        height=1;                           // Making Height Equal One
//    }
//    glViewport(0, 0, width, height);
//    glMatrixMode(GL_PROJECTION);                        // Select The Projection Matrix
//    glLoadIdentity();                           // Reset The Projection Matrix



//    glMatrixMode(GL_MODELVIEW);                     // Select The Modelview Matrix
//    glLoadIdentity();                           // Reset The Modelview Matrix

//    WindW = width;
//    WindH = height;

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
        int xx = (800 / (float)WindW) * x; // 800 / 400 = 2 * 200 = 400
        int yy = (600 / (float)WindH) * y;
        printf("click:{%i,%i}", x, y);
        printf("click:{%i,%i}", xx, yy);
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
    Net *net = new Net(WindW, WindH, 50.0f, 50.0f);
    View *view = new View(mark, net, path);

    Scene::getInstance()->addElement(net);
    Scene::getInstance()->addElement(view);
    Scene::getInstance()->addElement(mark);

    mark->addObserver(view);
    mark->addObserver(path);

    glutMainLoop();

    return 0;
}

// разобраться с синхронизацией

