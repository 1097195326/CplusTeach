#include "stdafx.h"
#include "WorkState.h"

#include "RestState.h"
#include "ToiletState.h"

WorkState::WorkState()
{
	IndexCount = 1;
	MaxCount = 10;
}
WorkState::~WorkState()
{
}

void WorkState::Enter()
{
	printf("WorkState Enter\n");
}
 void WorkState::Tick(Person * t)
{
	printf("WorkState Tick %d\n",IndexCount);

	if (IndexCount >= MaxCount)
	{
		t->GetManager()->ChangeState(new RestState());
	}else if (t->IsGotoToilet())
	{
		t->GetManager()->ChangeState(new ToiletState(),true,this);
	}
	
	t->AddIndex();
	++IndexCount;


}
 void WorkState::End()
{
	printf("WorkState End\n");
}