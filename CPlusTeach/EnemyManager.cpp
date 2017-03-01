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
}
void EnemyManager::ShowEnmeysId()
{
	
}
void EnemyManager::ShowEnemysName()
{
	
}
