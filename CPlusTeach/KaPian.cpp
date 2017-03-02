#include "stdafx.h"
#include "KaPian.h"

static int IdCount = 0;

KaPian::KaPian()
{
	__Id = IdCount += 1;
}
KaPian::KaPian(int type, int value)
{
	__Id = IdCount += 1;
	SetType(type);
	SetValue(value);
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
	case San:
		SetValue(San);
		break;
	case Si:
		SetValue(Si);
		break;
	case Wu:
		SetValue(Wu);
		break;
	case Liu:
		SetValue(Liu);
		break;
	case Qi:
		SetValue(Qi);
		break;
	case Ba:
		SetValue(Ba);
		break;
	case Jiu:
		SetValue(Jiu);
		break;
	case Shi:
		SetValue(Shi);
		break;
	case ShiYi:
		SetValue(ShiYi);
		break;
	case ShiEr:
		SetValue(ShiEr);
		break;
	case ShiSan:
		SetValue(ShiSan);
		break;
	case XiaoW:
		SetValue(XiaoW);
		break;
	case DaW:
		SetValue(DaW);
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
	case MeiHua:
		SetType(MeiHua);
		break;
	case FangPian:
		SetType(FangPian);
		break;
	case XiaoWang:
		SetType(XiaoWang);
		break;
	case DaWang:
		SetType(DaWang);
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