#pragma once

#include "EnemyInterface.h"


class Enemy :public EnemyInterface
{
public:
	void	DelegateMove();
	virtual void Move();
	virtual void Attack();
	
	virtual void Die(int type = 1);

	~Enemy();
};