#pragma once
#include "Enemy.h"


class FlyEnemy : public Enemy
{
public:
	virtual void Move();
	virtual void Attack();

	~FlyEnemy();
};

