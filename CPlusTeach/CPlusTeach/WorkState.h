#pragma once
#include "PersonStateManager.h"


class WorkState : public State<Person>
{
private:
	
public:
	WorkState();
	~WorkState();

	virtual void Enter();
	virtual void Tick(Person * t);
	virtual void End();
};

