
#include <stdio.h>
#include "Controller.h"
#include "View.h"
#include "Path.h"
#include "Mark.h"
#include "Net.h"
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(NULL));
    Mark mark;
    Controller controller(&mark);
    View view;
    Path path(&mark);
    mark.addObserver(&view);
    mark.addObserver(&path);
    //Net net;
    for(int i = 0; i < 3; i++) {
        controller.generateEvent();

        //draw(view);
    }
return 0;
}

// разобраться с синхронизацией
