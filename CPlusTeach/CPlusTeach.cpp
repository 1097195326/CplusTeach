// CPlusTeach.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include "PaySDK.h"	
#include "Model.h"
#include "View.h"



int main() 
{
	Model * model = new Model();
	View * view = new View();

	view->SetModel(model);
	view->ShowJinBi();

	cout << endl;
	PaySDK * paySdk = new PaySDK();
	paySdk->SetPayDelegate(model);
	paySdk->PayBegin();
	cout << endl;
	paySdk->PayFinish();

	cout << endl;
	view->ShowJinBi();

	cout <<"再次充值"<< endl;
	paySdk->SetPayDelegate(model);
	paySdk->PayBegin();
	cout << endl;
	paySdk->PayFinish();

	cout << endl;
	view->ShowJinBi();

	delete model;
	view->SetModel(nullptr);
	delete view;
	delete paySdk;

	cout << endl;
    return 0;
	 
}

