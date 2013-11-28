#ifndef GLRENDERSYSTEM_H
#define GLRENDERSYSTEM_H

#include "RenderSystem.h"

class GLRenderSystem : public RenderSystem
{
protected:
    GLRenderSystem();
public:
    static GLRenderSystem *getInstance();
    void clear();
    void swapBuffers();
};

#endif // GLRENDERSYSTEM_H
