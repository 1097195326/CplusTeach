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
		cout << "view �ͷ�"<<endl;
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
	cout << "������ʾ��ǰ��ҽ�ң�" << __ShowJinBi << "�����" << endl << endl;;
}