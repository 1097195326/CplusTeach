#include "stdafx.h"
#include "Enemy.h"

 static __int32 IdCount = 0;


Enemy::Enemy()
{
	__Id = IdCount += 1;
	__Name = "enemy";
	__Health = 10;
	__MyType = Walk;

}
Enemy::Enemy(EnemyActionType Type, string Name, __int16 Health) :
	__MyType(Type), __Name(Name), __Health(Health)
{
	__Id = IdCount += 1;

}
Enemy::Enemy(const Enemy & Enemy)
{
	//cout << "copy function" << endl;
	__Id = IdCount += 1;
	__Name = Enemy.__Name;
	__Health = Enemy.__Health;
	__MyType = Enemy.__MyType;

}
Enemy::~Enemy()
{
	cout << "Enemy release id:"<<__Id << endl;

}
EnemyActionType Enemy::GetType()
{
	return __MyType;
}
__int32 Enemy::GetId()
{
	return __Id;
}
void Enemy::SetName(string Name)
{
	__Name = Name;
}
string Enemy::GetName()
{
	return __Name;
}
void Enemy::SetHealth(__int16 Health)
{
	__Health = Health;
}
__int16 Enemy::GetHealth()
{
	return __Health;
}
void Enemy::operator=(const Enemy & Other)
{
	__Name = Other.__Name;
	__Health = Other.__Health;
	__MyType = Other.__MyType;
}
Enemy * Enemy::operator+(const Enemy & Other)
{
	Enemy * enemy = new Enemy();
	
	enemy->SetHealth(__Health + Other.__Health);
	enemy->SetName(__Name + Other.__Name);
	return enemy;
}

Enemy * operator-(const Enemy & A, const Enemy & B)
{
	Enemy * enemy = new Enemy();

	enemy->SetHealth(A.__Health + B.__Health);
	enemy->SetName(A.__Name + B.__Name);
	return enemy;
}

