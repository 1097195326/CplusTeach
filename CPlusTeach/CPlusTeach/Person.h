#pragma once

#include "KaPian.h"

#include <list>

using namespace std;

enum  PaiXingType
{
	Yi = 1,
	Er,
	San,
	Si,
	DoubleMi
};


class PaiXing;

struct ReRes
{
	bool bRes = false;
	PaiXing * PxPtr = nullptr;
};

class Person
{
private:
	list<KaPian *> _List;
	list<PaiXing *>  _MPaiXing;

	void CreatePaiXing();
	PaiXing * GetSmallPaiXingByType(int type);
public:
	Person();
	~Person();
	void AddKaPian(KaPian *);
	void SortKaPian();
	void ShowKaPian();

	void CanChuPai(PaiXing * InPX, ReRes & rs);
	void ChuPai(PaiXing * PX,int index);

	void ClearKaPian();
	bool IsEmpty();
	PaiXing * RestartChuPai();
};

