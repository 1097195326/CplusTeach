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

int main()
{
	KaPian * kaPian = new KaPian();
	kaPian->SetType(HeiTao);

    return 0;
	 
}

