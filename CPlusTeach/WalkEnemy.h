#pragma once

#include "Enemy.h"


class WalkEnemy : public Enemy
{
public:
	
	virtual void Move();
	virtual void Attack();

	virtual void Die(int type);

	~WalkEnemy();
};

