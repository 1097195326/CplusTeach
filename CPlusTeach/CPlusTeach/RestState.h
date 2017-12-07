#pragma once
#include "PersonStateManager.h"

class RestState : public State<Person>
{
public:
	RestState();
	~RestState();

	virtual void Enter();
	virtual void Tick(Person * t);
	virtual void End();
};

