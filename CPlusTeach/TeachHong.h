#pragma once

#include <iostream>

using namespace std;

#define MaxNum 5

#define ANDROID

#define Add(a,b) (a+b)


void CallHong()
{
	
	for (int i = 1; i <= MaxNum; i++)
	{
		cout << "add Value: " << Add(1,2)*i << endl;
	}
	
#ifdef ANDROID
	cout << "is Android platform" << endl;
#else
	cout << "other platform" << endl;
#endif // ANDROID

}