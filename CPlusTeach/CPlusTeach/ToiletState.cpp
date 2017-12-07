#include "stdafx.h"
#include "ToiletState.h"


ToiletState::ToiletState()
{
	IndexCount = 1;
	MaxCount = 2;
}


ToiletState::~ToiletState()
{
}
void ToiletState::Enter()
{
	printf("ToiletState Enter\n");
}
void ToiletState::Tick(Person * t)
{
	printf("ToiletState Tick %d\n",IndexCount);

	if (IndexCount >= MaxCount)
	{
		t->GetManager()->GotoPerState();
	}
	t->AddIndex();
	++IndexCount;
}
void ToiletState::End()
{
	printf("ToiletState End\n");
}