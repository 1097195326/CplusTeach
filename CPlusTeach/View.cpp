#include "stdafx.h"
#include "View.h"

#include "Model.h"

View::View()
{
}
View::~View()
{
	if (MyModel)
	{
		cout << "view 释放"<<endl;
		MyModel->RemoveObserver(this);
	}
}
void View::SetModel(Model * model)
{
	MyModel = model;
	if (MyModel)
	{
		MyModel->AddObserver(this);
		Update();
	}
}
void View::Update()
{
	__ShowJinBi = MyModel->GetJinBi();
}
void View::ShowJinBi()
{
	cout << "界面显示当前玩家金币：" << __ShowJinBi << "个金币" << endl << endl;;
}