#include "GLRenderSystem.h"
#include <GL/glut.h>

GLRenderSystem::GLRenderSystem()
{

}

GLRenderSystem *GLRenderSystem::getInstance()
{
    static GLRenderSystem* instance = new GLRenderSystem();

    return instance;

}

inline void GLRenderSystem::clear()
{
    glClear(GL_COLOR_BUFFER_BIT);
//     glLoadIdentity ();             /* обнуляем матрицу */
}

inline void GLRenderSystem::swapBuffers(){
//      glFlush();
      glutSwapBuffers();
}
