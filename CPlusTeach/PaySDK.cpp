#include "stdafx.h"
#include "PaySDK.h"


PaySDK::PaySDK():CanPayMoney(1),GetJinBi(10)
{
	CurrentDelegate = nullptr;
}


PaySDK::~PaySDK()
{
}
void PaySDK::SetPayDelegate(PayDelegate * payDelegate)
{
	CurrentDelegate = payDelegate;
}
void PaySDK::PayBegin()
{
	if (CurrentDelegate)
	{
		CurrentDelegate->PayBegin(CanPayMoney);
	}
}
void PaySDK::PayFinish()
{
	CurrentDelegate->PayFinish(GetJinBi);
	CurrentDelegate = nullptr;
}