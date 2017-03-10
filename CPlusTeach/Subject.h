#pragma once

#include "SubjectInterface.h"

#include <list>

class Observer;

class Subject :public SubjectInterface
{
private:
	list<Observer *> MyObserverS;
public:
	void AddObserver(Observer *);
	void RemoveObserver(Observer *);
public:
	Subject();
	virtual ~Subject();

	void Notify();
};

