#include "View.h"
#include <stdio.h>
#include <GL/glut.h>
#include <iostream>

View::View()
{
}

void View::notify()
{
}

View* View::getInstance()
{
    static View* instance = new View();

    return instance;
}

void View::display()
{
    //printf("elements: %i\n", getInstance()->elements.size());
    for(unsigned int i = 0; i < getInstance()->elements.size(); i++) {
        getInstance()->elements[i]->display();
    }
}

void View::addElement(DisplayableElement *element)
{
    this->elements.push_back(element);
}
