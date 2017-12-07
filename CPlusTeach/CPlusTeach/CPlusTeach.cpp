// CPlusTeach.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Person.h"


using namespace std;



int main()
{
	
	Person * p = new Person();

	while (p->IsAlive())
	{
		printf("---------------------------\n");
		p->Tick();
	}

    return 0;
}
