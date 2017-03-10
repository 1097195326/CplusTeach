#pragma once

#include "Observer.h"

class Model;

class View : public Observer
{
private:
	Model * MyModel;
	int __ShowJinBi;
public:
	View();
	~View();

	void SetModel(Model * model);

	void Update();
	void ShowJinBi();
};

