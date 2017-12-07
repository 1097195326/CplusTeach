#pragma once

#include "Person.h"
#include "State.h"
//#include <>

#define PSM PersonStateManager::CreateManager()

class PersonStateManager
{
private:
	PersonStateManager();
	State<Person> * CurState;
	State<Person> * PerState;
public:
	static PersonStateManager * CreateManager();
	~PersonStateManager();

	void SetInitState(State<Person> * s);
	void Tick(Person * p);
	void ChangeState(State<Person> * NextS,bool IsSave = false,State<Person> * PerS = nullptr);
	void GotoPerState();
};

