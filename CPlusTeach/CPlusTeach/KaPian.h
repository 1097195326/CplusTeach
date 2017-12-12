#pragma once

enum KaPianType
{
	HongTao,
	HeiTao,
	FangPian,
	MeiHua,
	XiaoMi,
	DaMi,
	Normal
};

class KaPian
{
private:
	int _Value;
	KaPianType _KaPianType;
	int _Priority;
public:
	KaPian(KaPianType Type, int Value, int _Priority);
	~KaPian();

	int GetPriority();

	void ShowValue();
};

