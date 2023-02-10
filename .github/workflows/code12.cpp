#include <iostream>
using namespace std;
int main()
{
	int balance;
	int *balptr;
	int value;
	balance = 3200;
	balptr = &balance;
	value = *balptr;
	cout << "teng balans:" << value << '\n';
	return 0;

}
