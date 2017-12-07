#pragma once
#include "PersonStateManager.h"

class ToiletState: public State<Person>
{
public:
	ToiletState();
	~ToiletState();

	virtual void Enter();
	virtual void Tick(Person * t);
	virtual void End();
};

