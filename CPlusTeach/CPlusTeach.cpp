// CPlusTeach.cpp : �������̨Ӧ�ó������ڵ㡣
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

