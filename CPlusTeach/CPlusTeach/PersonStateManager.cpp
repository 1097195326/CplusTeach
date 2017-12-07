#include "stdafx.h"
#include "PersonStateManager.h"


PersonStateManager::PersonStateManager()
{
	PerState = nullptr;
	CurState = nullptr;
}


PersonStateManager::~PersonStateManager()
{
}
PersonStateManager * PersonStateManager::CreateManager()
{
	 PersonStateManager * m =new PersonStateManager();
	return m;
}
void PersonStateManager::Tick(Person * p)
{
	CurState->Tick(p);

}
void PersonStateManager::ChangeState(State<Person> * NextS, bool IsSave, State<Person> * PerS)
{

	if (CurState != nullptr)
	{
		if (IsSave)
		{
			PerState = PerS;
		}
		else
		{
			CurState->End();
			delete CurState;
		}
	}
	CurState = NextS;
	CurState->Enter();


}
void PersonStateManager::GotoPerState()
{
	//ChangeState(PerState);
	CurState->End();
	delete CurState;
	CurState = PerState;
}
void PersonStateManager::SetInitState(State<Person> * s)
{
	CurState = s;
}