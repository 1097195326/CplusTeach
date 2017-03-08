// CPlusTeach.cpp : 定义控制台应用程序的入口点。
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
	// 获得数据
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
	// 行走逻辑
	cout << endl;
	for (int i = 0; i < 2; ++i)
	{
		EnemyList[i]->Move();
	}
	// 攻击逻辑
	cout << endl;
	for (int i = 0; i < 2; ++i)
	{
		EnemyList[i]->Attack();
	}
	// 死亡逻辑
	cout << endl;
	for (int i = 0; i < 2; ++i)
	{
		EnemyList[i]->Die();
	}
	// 内存释放
	cout << endl;
	for (int i = 0; i < 2; ++i)
	{
		delete EnemyList[i];
	}
	cout << endl;

    return 0;
	 
}

