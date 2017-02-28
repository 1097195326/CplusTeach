#pragma once


#include <iostream>

using namespace  std;





void ZiFuChuan()
{
	string	ss = "hello world";
	char	cs_1[] = "hello world";
	char	cs_2[] = {'h','e','l','l','o',' ','w','o','r','l','d'};

	//cout << "ss 1 size:" << sizeof(ss) << endl;
	cout << "ss 2 size:" << strlen(ss.c_str()) << endl;
	cout << "cs_1 size:" << sizeof(cs_1) << endl;
	cout << "cs_2 size:" << sizeof(cs_2) << endl;
}

void WeiYunSuan()
{
	__int32		Clear = 0;
	__int32		Idle = 1;
	__int32		Running = 1 << 1;
	__int32		Firing = 1 << 2;

	__int32 MyState = Idle;

	MyState = MyState | Running;
	if (MyState & Running)
	{
		cout << "Mystate is Running" << endl;
	}
	MyState = MyState &(~Running);
	if (MyState & Running)
	{

	}
	else
	{
		cout << "NO Running" << endl;
	}

	MyState |= Firing;
	if (MyState & Firing)
	{
		cout << "MyState is Firing" << endl;
	}

	MyState &= Clear;
	cout << "MyState=" << MyState << endl;
}