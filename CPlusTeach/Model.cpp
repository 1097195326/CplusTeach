#include "stdafx.h"
#include "Model.h"


Model::Model():MyJinBi(0)
{
}


Model::~Model()
{
	cout <<"model �ͷ�" << endl;
}

void Model::PayBegin(int money)
{
	cout << "�û������ֵ������ֵ��:"<< money <<"Ԫ"<< endl;
	cout << "��ֵ�ȴ�....." << endl << endl;;
}
void Model::PayFinish(int JinBi)
{
	cout << "��ֵ�ɹ��������:" << JinBi << "���" << endl << endl;;
	MyJinBi += JinBi;

	Notify();
}
int Model::GetJinBi()
{
	return MyJinBi;
}