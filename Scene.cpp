#include "Scene.h"
#include <stdio.h>

Scene::Scene()
{

}

Scene *Scene::getInstance()
{
    static Scene* instance = new Scene();

    return instance;
}

void Scene::display()
{
    printf("elements: %i\n", getInstance()->elements.size());
    for(unsigned int i = 0; i < getInstance()->elements.size(); i++) {
        getInstance()->elements[i]->display();
    }

//    glColor3f(1.0f, 0.0f, 1.0f);

//      glBegin(GL_POLYGON);
//        glVertex2f(-1.0f, -1.0f);
//        glVertex2f( 1.0f, -1.0f);
//        glVertex2f( 1.0f,  1.0f);
//        glVertex2f(-1.0f,  1.0f);
//      glEnd();

//      glColor3f(1.0f, 1.0f, 1.0f);
//      glBegin(GL_POLYGON);
//        glVertex2f(-0.5f, -0.5f);
//        glVertex2f( 0.5f, -0.5f);
//        glVertex2f( 0.5f,  0.5f);
//        glVertex2f(-0.5f,  0.5f);
//        glEnd();
}

void Scene::addElement(DisplayableElement *element)
{
    this->elements.push_back(element);
}

void Scene::init()
{

}

