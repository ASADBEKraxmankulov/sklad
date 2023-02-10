#include <iostream>
using namespace std;
int main()
{
	char ch;
	do {
		cin >> ch;
		ch = ch | 32;
		cout << ch;
	} while (ch != 'q');
	return 0;
}