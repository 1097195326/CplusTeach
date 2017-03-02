// CPlusTeach.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace  std;

#include "KaPian.h"

__int16 K_Data[6][15] =
{
	//  {1,2,3,4,5,6,7,8,9,10,11,12,13,x, d }

	{ 1,2,3,4,5,6,7,8,9,10,11,12,13,0 ,0 },	//hei
	{ 1,2,3,4,5,6,7,8,9,10,11,12,13,0 ,0 },	//hong
	{ 1,2,3,4,5,6,7,8,9,10,11,12,13,0 ,0 },	//mei
	{ 1,2,3,4,5,6,7,8,9,10,11,12,13,0 ,0 },	//fang
	{ 0,0,0,0,0,0,0,0,0,0 ,0 ,0 ,0 ,14,0 },	//x
	{ 0,0,0,0,0,0,0,0,0,0 ,0 ,0 ,0 ,0 ,15 },	//d
};
string TypeToString[] = { "HeiTao","HongTao","MeiHua","FangPian","XiaoWang","DaWang" };
string ValueToString[] = { "Jian","Er","San","Si","Wu","Liu","Qi","Ba","Jiu","Shi","ShiYi","ShiEr","ShiSan","XiaoW","DaW" };

void PrintName(KaPian * Arr[],int len)
{
	for (int i = 0; i < len; ++i)
	{
		if (i % 6 >= 5)
		{
			cout << endl;
		}
		KaPian * KP = Arr[i];
		cout<<KP->GetName().c_str() << ", ";
	}
	cout << endl;

}
int main()
{
	KaPian * AllKaPian[54];
	KaPian * A_Person[18];
	KaPian * B_Person[18];
	KaPian * C_Person[18];

	int All_K_Ptr = 0;
	int A_P = 0;
	int B_P = 0;
	int C_P = 0;

	// 取数据
	for (int i = 0; i < 6; ++i)
	{
		for (int j = 0; j < 15; ++j)
		{
			__int16 pre = K_Data[i][j];
			if (pre > 0)
			{
				AllKaPian[All_K_Ptr] = new KaPian(i, j);
				++All_K_Ptr;
			}
		}
	}
	// 洗牌

	// 发牌
	for (int i = 0; i < 54; ++i)
	{
		int chooseWho = i % 3;
		switch (chooseWho)
		{
		case 0:
		{
			A_Person[A_P] = AllKaPian[i];
			++A_P;
		}
			break;
		case 1:
		{
			B_Person[B_P] = AllKaPian[i];
			++B_P;
		}
			break;
		case 2:
		{
			C_Person[C_P] = AllKaPian[i];
			++C_P;
		}
			break;

		}
	}

	// 打印
	cout << "A Person " << endl;
	PrintName(A_Person, 18);
	cout << endl;
	cout << "B Person " << endl;
	PrintName(B_Person, 18);
	cout << endl;
	cout << "C Person " << endl;
	PrintName(C_Person, 18);
	cout << endl;

	// 排序

	// 打印

    return 0;
	 
}

