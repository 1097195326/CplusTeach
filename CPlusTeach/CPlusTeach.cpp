// CPlusTeach.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

using namespace  std;

#include "WalkEnemy.h"
#include "FlyEnemy.h"

int EnemyTypeData[] = { 1,2,3 };

int main() 
{
	Enemy * EnemyList[2];
	int EnemyIndex = 0;
	// �������
	for (int i = 0; i < 3; ++i)
	{
		Enemy * enemy = nullptr;
		switch (EnemyTypeData[i])
		{
		case 1:
			enemy = new WalkEnemy();
			break;
		case 2:
			enemy = new FlyEnemy();
			break;
		default :
			cout << "Do not know this Enemy Type " << endl;
			break;
		}
		if (enemy)
		{
			EnemyList[EnemyIndex] = enemy;
			++EnemyIndex;
		}
	}
	// �����߼�
	cout << endl;
	for (int i = 0; i < 2; ++i)
	{
		EnemyList[i]->Move();
	}
	// �����߼�
	cout << endl;
	for (int i = 0; i < 2; ++i)
	{
		EnemyList[i]->Attack();
	}
	// �����߼�
	cout << endl;
	for (int i = 0; i < 2; ++i)
	{
		EnemyList[i]->Die();
	}
	// �ڴ��ͷ�
	cout << endl;
	for (int i = 0; i < 2; ++i)
	{
		delete EnemyList[i];
	}
	cout << endl;

    return 0;
	 
}

