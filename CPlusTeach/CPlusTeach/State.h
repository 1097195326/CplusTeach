#pragma once

template<typename Type>
class State
{
protected:
	int IndexCount;
	int MaxCount;
public:
	State()
	{}
	virtual ~State(){}

	virtual void Enter()
	{

	}
	virtual void Tick(Type * MyOwer)
	{

	}
	virtual void End()
	{

	}
};

