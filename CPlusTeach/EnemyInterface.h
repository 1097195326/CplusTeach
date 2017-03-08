#pragma once
#include <iostream>

using namespace std;

class EnemyInterface
{
public:
	virtual void Move() = 0;
	virtual void Attack() = 0;

	virtual ~EnemyInterface() { cout << "enemy interfacke Îö¹»" << endl; };
};

