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
    DisplayableElement.cpp \
    DirectionalPoint.cpp \

HEADERS += \
    BlinkedMark.h\
    View.h \
    Net.h \
    Path.h \
    Controller.h \
    Mark.h \
    Observable.h \
    Observer.h \
    DisplayableElement.h \
    DirectionalPoint.h
