// CPlusTeach.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace  std;

//#include "WeiYunsuan.h"
//#include "ZhiZhen.h"
//#include "Functions.h"
//#include "FunctionTemplate.h"
//#include "TeachHong.h"

#include "EnemyManager.h"


int main() 
{
	//ZiFuChuan();
	//ShowPoint();
	//CallFunctions();
	//CallFunTem();
	//CallHong();

	//cout << "test size:" << sizeof(TestSize) << endl;
	
	E_M_Instance->CreateEnemys();
	E_M_Instance->ShowEnmeysId();
	E_M_Instance->ShowEnemysName();


    return 0;
	 
}

