#include "stdafx.h"
#include "KaPian.h"



KaPian::KaPian(KaPianType Type, int Value, int Priority):
	_KaPianType(Type),_Value(Value),_Priority(Priority)
{

}

KaPian::~KaPian()
{
}
int KaPian::GetPriority()
{
	return _Priority;
}
void KaPian::ShowValue()
{
	printf("%d \t", _Value);
}