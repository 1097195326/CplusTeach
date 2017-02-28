#pragma once

#include <String>
#include <iostream>

using namespace std;



enum EnemyActionType
{
	Walk = 1,
	Jump,
	Fly
};

class TestSize
{
	double c;		// |_|_|_|_|_|_|_|_|

	int b;			// |_|_|_|_|_|_|_|_|
	char d;			// |_|
	char e;			// |_|

	double a;		// |_|_|_|_|_|_|_|_|

	char g;			// |_|

};

class Enemy
{
	friend Enemy * operator- (const Enemy & A, const Enemy & B);
private:
	
	__int32		__Id;
	string		__Name;
	__int16		__Health;
	EnemyActionType __MyType;
protected:
	EnemyActionType	GetType();
public:
	Enemy();
	Enemy(EnemyActionType Type, string Name, __int16 Health);
	Enemy(const Enemy & enemy);
	~Enemy();

	__int32		GetId();
	void		SetName(string Name);
	string		GetName();
	void		SetHealth(__int16);
	__int16		GetHealth();


	void operator= (const Enemy &);
	Enemy * operator+ (const Enemy &);
};
Enemy * operator- (const Enemy & A, const Enemy & B);

// int i = 1;
// ++i;
// i++;