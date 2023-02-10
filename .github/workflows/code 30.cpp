#include <iostream>
using namespace std;
void f(int* j);
int main()
{
	int i;
	int* p;
	p = &i;
	f(p);
	cout << i;
	return 0;
}

void f(int* j)

{
	*j = 100;
}