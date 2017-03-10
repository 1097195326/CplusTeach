#pragma once
#include "Subject.h"
#include "PayDelegate.h"

class Model : public Subject,public PayDelegate
{
private:
	int MyJinBi;

public:
	Model();
	~Model();

	virtual void PayBegin(int money);
	virtual void PayFinish(int JinBi);

	int GetJinBi();
};

