#pragma once


#define E_M_Instance EnemyManager::GetInstance()


class Enemy;

class EnemyManager
{
private:
	Enemy * EnemyList[4];
	Enemy * SpecialEnemy;
	Enemy * AddEnemy;
public:
	EnemyManager();
	~EnemyManager();


	static EnemyManager * GetInstance();

	void CreateEnemys();
	void ShowEnmeysId();
	void ShowEnemysName();

};

