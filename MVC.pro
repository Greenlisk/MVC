QT += opengl

LIBS += -lglut \
-lGL\
 -lGLU

INCLUDEPATH += -L/usr/lib/

SOURCES += \
    BlinkedMark.cpp\
    main.cpp \
    View.cpp \
    Net.cpp \
    Path.cpp \
    Controller.cpp \
    Mark.cpp \
    Scene.cpp \
    DisplayableElement.cpp \
    DirectionalPoint.cpp \
    Window.cpp \

HEADERS += \
    BlinkedMark.h\
    View.h \
    Net.h \
    Path.h \
    Controller.h \
    Mark.h \
    Observable.h \
    Observer.h \
    Scene.h \
    DisplayableElement.h \
    DirectionalPoint.h \
    Window.h
