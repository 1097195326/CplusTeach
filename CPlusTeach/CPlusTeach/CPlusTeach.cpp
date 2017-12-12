// CPlusTeach.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

#include "GameSession.h"

using namespace std;

int KaPianData[][15] =
{
	// 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, X, D
	{  12,13,1, 2, 3, 4, 5, 6, 7, 8,  9,  10, 11, 0, 0}, // ����
	{  12,13,1, 2, 3, 4, 5, 6, 7, 8,  9,  10, 11, 0, 0 }, // ����
	{  12,13,1, 2, 3, 4, 5, 6, 7, 8,  9,  10, 11, 0, 0 }, // ��Ƭ
	{  12,13,1, 2, 3, 4, 5, 6, 7, 8,  9,  10, 11, 0, 0 }, // ÷��
	{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  0,  0,  0,  14, 0 }, // С��
	{  0, 0, 0, 0, 0, 0, 0, 0, 0, 0,  0,  0,  0,  0, 15 }  //  ����
};
KaPianType GetType(int i)
{
	
	switch (i)
	{
	case 0:
		 return HongTao;
		break;
	case 1:
		return HeiTao;
		break;
	case 2:
		return FangPian;
		break;
	case 3:
		return MeiHua;
		break;
	case 4:
		return XiaoMi;
		break;
	case 5:
		return DaMi;
		break;
	default:
		break;
	}
	return Normal;
}


int main()
{
	for (int i = 0; i < 6; ++i)
	{
		for (int j = 0; j < 15; ++j)
		{
			if (KaPianData[i][j] == 0)
			{
				continue;
			}
			GS->AddKaPian(GetType(i), j + 1, KaPianData[i][j]);
		}
	}
	GS->XiPai();

	GS->FaPai();
	printf("���ƺ�\n");
	GS->ShowPerson();
	printf("\n");
	GS->PersonSortKaPian();
	printf("������\n");
	GS->ShowPerson();
	printf("��ʼ��Ϸ\n");
	GS->PlayGame();

	printf("\n");
    return 0;
}
