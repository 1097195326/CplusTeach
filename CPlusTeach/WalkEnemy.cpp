#include "stdafx.h"
#include "WalkEnemy.h"

void WalkEnemy::Move()
{
	cout << "WalkEnmey move action : ÐÐ×ß" << endl;
}
void WalkEnemy::Attack()
{
	cout << "WalkEnemy Attack action : Åü¿³" << endl;
}
void WalkEnemy::Die(int type)
{
	cout << "WalkEnemy Die type :" << type << endl;
}
WalkEnemy::~WalkEnemy()
{
	cout << "WalkEnemy Îö¹»" << endl;
}