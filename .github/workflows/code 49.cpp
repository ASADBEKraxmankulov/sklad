#include <iostream>
using namespace std;
int main()
{
	int* p;
	p = new int;
	*p = 20;
	cout << *p;
	delete p;
	return 0;
}