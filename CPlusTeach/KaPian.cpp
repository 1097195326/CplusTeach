#include "stdafx.h"
#include "KaPian.h"

static int IdCount = 0;

KaPian::KaPian()
{
	__Id = IdCount += 1;
}
KaPian::~KaPian()
{
}
__int16 KaPian::GetId()
{
	return __Id;
}
void KaPian::SetValue(K_Value Value)
{
	__Value = Value;
}
void KaPian::SetValue(int Value)
{
	switch (Value)
	{
	case Jian:
		SetValue(Jian);
		break;
	case Er:
		SetValue(Er);
		break;
	}
}
K_Value KaPian::GetValue()
{
	return __Value;
}
void KaPian::SetType(K_Type Type)
{
	__Type = Type;
}
void KaPian::SetType(int Type)
{
	switch (Type)
	{
	case HeiTao:
		SetType(HeiTao);
		break;
	case HongTao:
		SetType(HongTao);
		break;
	}
}
K_Type KaPian::GetType()
{
	return __Type;
}
string KaPian::GetName()
{
	string TypeName = TypeToString[__Type];
	switch (__Type)
	{
	case XiaoWang:
		return TypeName;
		break;
	case DaWang:
		return TypeName;
		break;
	}
	return TypeName + " " + ValueToString[__Value];
}