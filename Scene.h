#ifndef SCENE_H
#define SCENE_H
#include <vector>
#include "DisplayableElement.h"

using namespace std;

class Scene
{
private:
    Scene();
    vector<DisplayableElement *> elements;
public:
    static Scene* getInstance();
    void init();
//    virtual void ~Scene();
    static void display();
    void addElement(DisplayableElement*);
};

#endif // SCENE_H
