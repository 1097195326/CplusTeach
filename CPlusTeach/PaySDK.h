#pragma once

#include "PayDelegate.h"

class PaySDK
{
private:
	PayDelegate * CurrentDelegate;

	int CanPayMoney;
	int GetJinBi;
public:
	PaySDK();
	~PaySDK();

	void SetPayDelegate(PayDelegate * payDelegate);

	void PayBegin();
	void PayFinish();
};

