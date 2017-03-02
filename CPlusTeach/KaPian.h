#pragma once

#include <iostream>
#include <String>

using namespace std;

extern __int16 K_Data[6][15];
extern string TypeToString[];
extern string ValueToString[];

enum K_Type
{
	HeiTao = 0,
	HongTao,
	MeiHua,
	FangPian,

	XiaoWang,
	DaWang,
};

enum K_Value
{
	Jian = 0,
	Er,
	San,
	Si,
	Wu,
	Liu,
	Qi,
	Ba,
	Jiu,
	Shi,
	ShiYi,
	ShiEr,
	ShiSan,
	XiaoW,
	DaW,
};

class KaPian
{
private:
	__int16		__Id;

	K_Value		__Value;
	K_Type		__Type;
public:
	__int16		MyPre;

	__int16	GetId();

	void	SetType(K_Type type);
	void	SetType(int type);
	K_Type	GetType();

	void	SetValue(K_Value value);
	void	SetValue(int value);
	K_Value	GetValue();

	string	GetName();
public:
	KaPian();
	~KaPian();
};

