#include "stdafx.h"
#include "EnemyManager.h"
#include "Enemy.h"

EnemyManager::EnemyManager()
{
	//EnemyList;
}
EnemyManager::~EnemyManager()
{
	for (int i = 0; i < 4; ++i)
	{
		delete EnemyList[i];
	}
	delete SpecialEnemy;
	delete AddEnemy;
}
EnemyManager * EnemyManager::GetInstance()
{
	static EnemyManager  enemyManager;
	return &enemyManager;
}
void EnemyManager::CreateEnemys()
{
	for (int i = 0; i < 3; ++i)
	{
		EnemyList[i] = new Enemy();
	}
	EnemyList[3] = new Enemy(Fly, "King", 200);
	
	SpecialEnemy = new Enemy();

	//SpecialEnemy-> operator=(*EnemyList[3]);
	*SpecialEnemy = *EnemyList[3];
	//AddEnemy = *SpecialEnemy - *EnemyList[3];
	AddEnemy = *SpecialEnemy + *EnemyList[3]; 
}
void EnemyManager::ShowEnmeysId()
{
	for (int i = 0; i < 4; ++i)
	{
		cout << "Show Enemy Id : " << EnemyList[i]->GetId() << endl;
	}
	cout << "Show Enemy Id : " << SpecialEnemy->GetId() << endl;
	cout << "Show Enemy Id : " << AddEnemy->GetId() << endl;
}
void EnemyManager::ShowEnemysName()
{
	for (int i = 0; i < 4; ++i)
	{
		cout << "Show Enemy Name : " << EnemyList[i]->GetName().c_str() << ", Health: " << EnemyList[i]->GetHealth() << endl;
	}
	cout << "Show Enemy Name : " << SpecialEnemy->GetName().c_str() << ", Health: " << SpecialEnemy->GetHealth() << endl;
	cout << "Show Enemy Name : " << AddEnemy->GetName().c_str() << ", Health: " << AddEnemy->GetHealth() << endl;
}
