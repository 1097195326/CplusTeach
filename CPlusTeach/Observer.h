#pragma once

#include "ObserverInterface.h"


class Observer : public ObserverInterface
{
public:
	Observer();
	virtual ~Observer();

	void Update();
};

