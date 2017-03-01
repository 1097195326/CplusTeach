#include "stdafx.h"
#include "WalkEnemy.h"

WalkEnemy::WalkEnemy()
{
	IdCount = 200;
	testId = 22;
	cout << "Walk Enemy 构造函数" << endl;
}


WalkEnemy::~WalkEnemy()
{
	cout << "Walk Enemy 析够函数" << endl;
}

void WalkEnemy::GetIdCount()
{
	cout << "Walk Enemy id count "<< IdCount<<", testid = "<<testId << endl;
}