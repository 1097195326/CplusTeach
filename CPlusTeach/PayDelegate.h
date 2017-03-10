#pragma once

class PayDelegate
{
public:
	virtual void PayBegin(int money) = 0;
	virtual void PayFinish(int JinBi) = 0;
};