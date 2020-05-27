#include "subject.h"

subject::subject()
{
}

void subject::addObserver(observer* Observer)
{
	Observers.push_back(Observer);
}

void subject::notify()
{
	for (int iObserver = 0; iObserver < Observers.size(); ++iObserver)
	{
		Observers[iObserver]->notify();
	}
}