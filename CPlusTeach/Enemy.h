#pragma once

#include <String>
#include <iostream>

using namespace std;

class Enemy
{
private:
	
protected:
	
public:
	static __int32 IdCount;
	int			testId;

	Enemy();
	~Enemy();

	void		GetIdCount();
	void		ChangeIdCount();

};