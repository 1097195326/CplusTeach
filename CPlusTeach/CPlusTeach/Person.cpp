#include "stdafx.h"
#include "Person.h"
#include <cstdlib>
#include "PersonStateManager.h"
#include "WorkState.h"


Person::Person()
{
	Index = 0;
	MaxIndex = 100;
	Manager = PSM;
	WorkState * w = new WorkState();
	Manager->SetInitState(w);
}


Person::~Person()
{
}

bool Person::IsAlive()
{
	return Index <= MaxIndex;
}
void Person::AddIndex()
{
	++Index;
}
bool Person::IsGotoToilet()
{
	int r = rand() % 100;
	if (r < 10)
	{
		return true;
	}
	return false;
}
void Person::Tick()
{
	Manager->Tick(this);
}
PersonStateManager * Person::GetManager()
{
	return Manager;
}