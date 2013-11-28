#ifndef RENDERSYSTEM_H
#define RENDERSYSTEM_H

class RenderSystem
{

protected:
    RenderSystem();
public:

    virtual void clear() = 0;
    virtual void swapBuffers() = 0;
};

#endif // RENDERSYSTEM_H
