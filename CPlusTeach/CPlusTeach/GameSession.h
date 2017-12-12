#pragma once

#include <vector>
#include "KaPian.h"
#include "Person.h"
using namespace std;

#define GS  GameSession::GetInstance()

class GameSession
{
private:
	vector<KaPian *> _AllKaPian;
	Person * _AllPerson[3];
	GameSession();


	Person * CurrPerson;
	PaiXing * CurrPaiXing;
	PaiXing * PrePaiXing;
public:
	void AddKaPian(KaPianType Type, int Value, int _Priority);
	
	~GameSession();
	static GameSession * GetInstance();

	void FaPai();
	void XiPai();
	void PersonSortKaPian();

	void ShowKaPian();
	void ShowPerson();

	void PlayGame();
};

