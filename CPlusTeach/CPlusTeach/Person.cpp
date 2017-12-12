#include "stdafx.h"
#include "Person.h"

class PaiXing
{
	KaPian * AllPianPtr[4];

	int		_index;
	PaiXingType _type;

	int _ValueComare;
	void SetType(int index)
	{
		switch (index)
		{
		case 1:
			_type = Yi;
			break;
		case 2:
			_type = AllPianPtr[0]->GetPriority() > 13 && AllPianPtr[1]->GetPriority() > 13 ? DoubleMi : Er;
			break;
		case 3:
			_type = San;
			break;
		case 4:
			_type = Si;
			break;
		default:
			break;
		}
	}
public:
	PaiXing() :
		_index(0)
	{}
	void AddKaPian(KaPian * kp)
	{
		AllPianPtr[_index] = kp;
		++_index;
		SetType(_index);
	}
	KaPian * GetFirstKaPian()
	{
		return AllPianPtr[0];
	}
	void SetValueCompare(int v)
	{
		_ValueComare = v;
	}
	int GetValueComapare()
	{
		return _ValueComare;
	}
	PaiXingType GetType()
	{
		return _type;
	}
};

Person::Person()
{
}


Person::~Person()
{
}
void Person::AddKaPian(KaPian * kp)
{
	_List.push_back(kp);
}

void Person::CreatePaiXing()
{
	list<KaPian*>::iterator iter = _List.begin();
	for (; iter != _List.end(); ++iter)
	{
		KaPian * kp = *iter;
		
		if (_MPaiXing.empty())
		{
			PaiXing * px = new PaiXing();
			px->AddKaPian(kp);
			px->SetValueCompare(kp->GetPriority());
			_MPaiXing.push_back(px);
		}
		else
		{
			PaiXing * px = *(_MPaiXing.rbegin());
			KaPian * Fkp = px->GetFirstKaPian();
			if (Fkp->GetPriority() > 13 && kp->GetPriority() > 13)
			{
				px->AddKaPian(kp);
			}
			else if (Fkp->GetPriority() == kp->GetPriority())
			{
				px->AddKaPian(kp);
			}
			else
			{
				PaiXing * px = new PaiXing();
				px->AddKaPian(kp);
				px->SetValueCompare(kp->GetPriority());
				_MPaiXing.push_back(px);
			}
		}
	}
}
bool Compare(KaPian * a, KaPian *b)
{
	return  a->GetPriority() > b->GetPriority();
}
void Person::SortKaPian()
{
	_List.sort(Compare);

	CreatePaiXing();
}
void Person::ShowKaPian()
{
	list<KaPian*>::iterator iter = _List.begin();
	for (; iter != _List.end(); ++iter)
	{
		(*iter)->ShowValue();
	}
}
void Person::CanChuPai(PaiXing * InPX, ReRes & res)
{
	list<PaiXing*>::reverse_iterator iter = _MPaiXing.rbegin();
	for (; iter != _MPaiXing.rend(); ++iter)
	{
		PaiXing * px = (*iter);
		if (InPX->GetType() == px->GetType() && px->GetValueComapare() > InPX->GetValueComapare())
		{
			res.bRes = true;
			res.PxPtr = px;
			break;
		}
	}
	iter = _MPaiXing.rbegin();
	for (; iter != _MPaiXing.rend(); ++iter)
	{
		PaiXing * px = (*iter);
		if (px->GetType() > 3)
		{
			res.bRes = true;
			res.PxPtr = px;
			break;
		}
	}
}
void Person::ChuPai(PaiXing * px, int index)
{

	index++;
	PaiXingType type = px->GetType();
	switch (type)
	{
	case Yi:
			printf("%d 一张 \t",index);
		break;
	case Er:
		printf("%d 两张 \t",index);
		break;
	case San:
		printf("%d 三张 \t",index );
		break;
	case Si:
		printf("%d 炸弹 \t", index);
		break;
	case DoubleMi:
		printf("%d 双眯\t",index);
		break;
	default:
		break;
	}
	px->GetFirstKaPian()->ShowValue();


	printf("pai xing lengtyh %d\n",_MPaiXing.size());

	_MPaiXing.remove(px);
}
void Person::ClearKaPian()
{
	_List.clear();
}
bool Person::IsEmpty()
{
	return _MPaiXing.empty();
}
PaiXing * Person::GetSmallPaiXingByType(int type)
{
	PaiXing * outpx = nullptr;
	list<PaiXing*>::reverse_iterator iter = _MPaiXing.rbegin();
	for (; iter != _MPaiXing.rend(); ++iter)
	{
		PaiXing * px = (*iter);
		if (px->GetType() == type)
		{
			outpx = px;
			break;
		}
	}
	return outpx;
}
PaiXing * Person::RestartChuPai()
{
	PaiXing * px = nullptr;
	for (int i = 1; i < 6; ++i)
	{
		px = GetSmallPaiXingByType(i);
		if (px != nullptr)
		{
			break;
		}
	}
	return px;
}