// CPlusTeach.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class A
{
public:
	int a;
	A():a(1){}
};
class B : public virtual A
{
public:
	int b;
	B():b(2){}
};
class C : public virtual  A
{
public:
	int c;
	C():c(3){}
};
class D : public B, public C
{
public:
	int b = c = 0;
};

int main()
{
	D d;
	d.B::a = 10;
	d.C::a = 20;

	cout << "A class a : " <<d.B::a<< endl;
	//cout << "Class size: " << sizeof(D) << endl;

	//	A	a
	//	B	a,b
	//	C	a,c
	//	D	a,b,c,

    return 0;
}

