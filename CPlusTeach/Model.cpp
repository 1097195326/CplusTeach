#include "stdafx.h"
#include "Model.h"


Model::Model():MyJinBi(0)
{
}


Model::~Model()
{
	cout <<"model 释放" << endl;
}

void Model::PayBegin(int money)
{
	cout << "用户点击充值，并充值了:"<< money <<"元"<< endl;
	cout << "充值等待....." << endl << endl;;
}
void Model::PayFinish(int JinBi)
{
	cout << "充值成功，并获得:" << JinBi << "金币" << endl << endl;;
	MyJinBi += JinBi;

	Notify();
}
int Model::GetJinBi()
{
	return MyJinBi;
}