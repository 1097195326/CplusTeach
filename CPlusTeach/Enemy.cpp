#include "stdafx.h"
#include "Enemy.h"

 __int32 Enemy::IdCount = 0;


Enemy::Enemy()
{
	IdCount = 100;
	testId = 11;
	
	cout << "Enemy 构造函数" << endl;
}
Enemy::~Enemy()
{
	cout << "Enemy 析够函数" << endl;
}
void Enemy::GetIdCount()
{
	cout << "Enemy id count " << IdCount<<", testid = "<<testId << endl;
}
void Enemy::ChangeIdCount()
{
	IdCount = 300;
}
