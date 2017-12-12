#include "stdafx.h"
#include "GameSession.h"

#include <algorithm>
#include <time.h>


GameSession::GameSession()
{
	for (int i = 0; i < 3; ++i)
	{
		_AllPerson[i] = new Person();
	}
	CurrPerson = nullptr;
	CurrPaiXing = nullptr;
	PrePaiXing = nullptr;
}


GameSession::~GameSession()
{
}
void GameSession::AddKaPian(KaPianType Type, int Value, int Priority)
{
	KaPian * Kp = new KaPian(Type,Value, Priority);
	_AllKaPian.push_back(Kp);


}
GameSession * GameSession::GetInstance()
{
	static GameSession s;
	return &s;
}
void GameSession::FaPai()
{
	int index = 0;
	vector<KaPian*>::iterator iter = _AllKaPian.begin();
	for (; iter != _AllKaPian.end(); ++iter)
	{
		KaPian * kp = *iter;
		index = index % 3;
		_AllPerson[index]->AddKaPian(kp);
		++index;
	}
}

void GameSession::XiPai()
{
	srand((unsigned)time(NULL));
	random_shuffle<vector<KaPian *>::iterator>(_AllKaPian.begin(), _AllKaPian.end());
	
}
void GameSession::ShowKaPian()
{
	vector<KaPian*>::iterator iter  = _AllKaPian.begin();
	for (; iter != _AllKaPian.end(); ++iter)
	{
		(*iter)->ShowValue();
	}
}
void GameSession::PersonSortKaPian()
{
	for (int i = 0; i < 3; ++i)
	{
		_AllPerson[i]->SortKaPian();
	}
}
void GameSession::ShowPerson()
{
	for (int i = 0; i < 3; ++i)
	{
		_AllPerson[i]->ShowKaPian();
		printf("\n");
	}
}
void GameSession::PlayGame()
{
	bool IsFinish = false;
	int FinishIndex = 9;
	int index = 0;
	while (!IsFinish)
	{
		--FinishIndex;
		for (int i = 0; i < 3; ++i)
		{
			IsFinish  = _AllPerson[i]->IsEmpty();
			if (IsFinish)
			{
				printf("This Person %d is Winner\n",i+1);
				break;
			}
		}
		index = index % 3;

		//printf("index = %d\n",index);

		if (CurrPerson != nullptr)
		{
			if (CurrPerson == _AllPerson[index])
			{
				//delete PrePaiXing;
				CurrPaiXing = CurrPerson->RestartChuPai();
				//PrePaiXing = CurrPaiXing;
				CurrPerson->ChuPai(CurrPaiXing, index);
			}
			else
			{
				ReRes rs;
				_AllPerson[index]->CanChuPai(CurrPaiXing,rs);
				if (rs.bRes)
				{
					/*delete PrePaiXing;
					PrePaiXing = CurrPaiXing;*/
					CurrPaiXing = rs.PxPtr;
					CurrPerson = _AllPerson[index];
					CurrPerson->ChuPai(CurrPaiXing, index);
				}
			}
		}
		if (CurrPaiXing == nullptr)
		{
			CurrPerson = _AllPerson[index];
			CurrPaiXing = CurrPerson->RestartChuPai();
			//PrePaiXing = CurrPaiXing;
			CurrPerson->ChuPai(CurrPaiXing,index);
		}
		
		++index;

	}
}