﻿#include <iostream>
using namespace std;
int main()
{
	int* p;
	p = new int(99);
	cout << *p;
	delete p;
	return 0;
}