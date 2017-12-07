#pragma once

class PersonStateManager;


class Person
{
private:
	int Index;
	int MaxIndex;

	PersonStateManager * Manager;
public:
	Person();
	~Person();

	void AddIndex();
	bool IsAlive();

	bool IsGotoToilet();

	void Tick();
	PersonStateManager * GetManager();
};

