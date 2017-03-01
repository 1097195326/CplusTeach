// CPlusTeach.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace  std;

#include "WalkEnemy.h"


int main() 
{
	// Enemy		{IdCount,testId}
	// WalkEnemy	{IdCount,testId,testId}

	//		new		堆	testId，testId
	//				栈	testId，testId
	// 静态常量内存		IdCount

	//WalkEnemy walkEnemy;
	Enemy * enemy = new WalkEnemy();

	cout << "enemy size:" << sizeof(Enemy) << endl;
	cout << "walk enemy size:" << sizeof(WalkEnemy) << endl;

	enemy->GetIdCount();

	WalkEnemy * walkEnemy = (WalkEnemy *)enemy;
	walkEnemy->GetIdCount();

	enemy->ChangeIdCount();
	walkEnemy->GetIdCount();


	// 域 的概念
	{
		int x = 10;
		{
			int x = 20;
			cout << "x = "<<x << endl;
		}
		cout << "x = " << x << endl;
	}

    return 0;
	 
}

