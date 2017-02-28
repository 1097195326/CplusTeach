#pragma once



#include <iostream>
#include <cstdlib>

using namespace  std;

void ChangeA(int * a, int & b);
int ChangeB(const int * a, const int & b);


void ShowPoint()
{
	// * 
	// &
	//const int * p1;
	//int * const p2;
	//const int * const p3;

	//const int const * const p4;

	int * n_a = new int();
	delete n_a;

	int a = 1;
	int & b = a;
	int * p_a = &a;
	b++;
	int c = *p_a;

	ChangeA(p_a, b);
	int d = ChangeB(p_a, b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;
}
void ChangeA(int * a, int & b)
{
	*a += b;
}
int ChangeB(const int * a, const int & b)
{
	//*a = *a + b;
	int c = *a + b;
	return c;
}