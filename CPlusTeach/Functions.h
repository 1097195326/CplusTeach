#pragma once

#include <iostream>
#include "FunctionA.h"
#include "FunctionB.h"

using namespace  std;

int Functions(float a, float b);
int Functions(int a, int b);
int functionsB(int a, int b);

extern int FunA;
extern int FunB;

typedef int(* CallF)(int, int);
CallF cf = Functions;
CallF cfb = functionsB;
void CallFunctions()
{
	int c = cf(FunA, FunB);
	int d = cfb(FunA, FunB);
	Functions(FunA, FunB);
	cout << "a = " << FunA << endl;
	cout << "b = " << FunB << endl;
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;
}
int Functions(float a, float b)
{
	cout << "function float" << endl;
	++a;
	++b;
	return (int)(a + b);
}
int Functions(int a, int b)
{
	cout << "function int" << endl;
	a += 2;
	b += 2;
	return a + b;
}
int functionsB(int a, int b)
{
	cout << "function int b" << endl;
	return a += b;
}

