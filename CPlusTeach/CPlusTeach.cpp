// CPlusTeach.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "TestNS.h"

namespace ABC
{
	void CallFunction()
	{
		ShowFunction();
	}
}

int main() 
{
	ABC::CallFunction();
	{

		using namespace ABC;

		CallFunction();
	}
	//CallFunction();
    return 0;
	 
}

