#ifndef OBSERVABLE_H
#define OBSERVABLE_H
#include "Observer.h"
#include <vector>

using namespace std;

class Observable
{
    vector<class Observer*> observers;
public:
    void addObserver(Observer* observer)
    {
        observers.push_back(observer);
    }
protected:
    void notify_all()
    {
        for(int i = 0; i < observers.size(); i++)
            observers[i]->notify();
    }
};


#endif // OBSERVABLE_H
