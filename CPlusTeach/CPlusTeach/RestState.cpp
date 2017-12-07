#include "stdafx.h"
#include "RestState.h"
#include "ToiletState.h"
#include "WorkState.h"

RestState::RestState()
{
	IndexCount = 1;
	MaxCount = 5;
}
RestState::~RestState()
{
}
void RestState::Enter()
{
	printf("RestState Enter\n");
}
void RestState::Tick(Person * t)
{
	printf("RestState Tick %d\n",IndexCount);
	if (IndexCount >= MaxCount)
	{
		t->GetManager()->ChangeState(new WorkState());
	}else if (t->IsGotoToilet())
	{
		t->GetManager()->ChangeState(new ToiletState(), true, this);
	}
	
	t->AddIndex();
	++IndexCount;
}
void RestState::End()
{
	printf("RestState End\n");
}