#include "stdafx.h"
#include "Subject.h"

#include "Observer.h"

Subject::Subject()
{
}
Subject::~Subject()
{
	MyObserverS.clear();
}
void Subject::Notify()
{
	//cout << "Subject Notify" << endl;
	list<Observer *>::iterator iter = MyObserverS.begin();
	for (;iter != MyObserverS.end(); ++iter)
	{
		Observer * observer = *iter;
		observer->Update();
	}
}
void Subject::AddObserver(Observer * observer)
{
	MyObserverS.push_back(observer);
}
void Subject::RemoveObserver(Observer * observer)
{
	MyObserverS.remove(observer);
}