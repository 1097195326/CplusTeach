#include "stdafx.h"
#include "WalkEnemy.h"

void WalkEnemy::Move()
{
	cout << "WalkEnmey move action : ����" << endl;
}
void WalkEnemy::Attack()
{
	cout << "WalkEnemy Attack action : ����" << endl;
}
void WalkEnemy::Die(int type)
{
	cout << "WalkEnemy Die type :" << type << endl;
}
WalkEnemy::~WalkEnemy()
{
	cout << "WalkEnemy ����" << endl;
}