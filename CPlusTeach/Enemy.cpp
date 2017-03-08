#include "stdafx.h"
#include "Enemy.h"

void Enemy::Move()
{
	cout << "enemy move" << endl;
}
void Enemy::Attack()
{
	cout << "enemy attack" << endl;
}
void Enemy::Die(int type)
{
	cout << "enemy die type = "<<type << endl;
}
Enemy::~Enemy()
{
	cout << "enemy Îö¹»" << endl;
}