#pragma once

#include <iostream>

using namespace std;


template <typename Type>
Type Add(Type A, Type B)
{
	return A + B;
}

void CallFunTem()
{
	int a = Add<int>(10, 20);
	float b = Add<float>(1.2, 1.5);


	cout << "a = "<<a << endl;
	cout << "b = "<<b << endl;

}