// CPlusTeach.cpp : �������̨Ӧ�ó������ڵ㡣
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
