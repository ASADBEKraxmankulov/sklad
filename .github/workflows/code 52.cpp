#include <iostream>
using namespace std;
int main()
{
	double* p;
	int i;
	p = new double[10];
	for (i = 0; i < 10; i++) p[i] = 100.00 + i;
	for (i = 0; i < 10; i++) cout << p[i] << " ";
	delete[] p;
	return 0;
}