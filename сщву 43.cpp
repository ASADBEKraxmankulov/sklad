#include <iostream>
using namespace std;
int main()
{
	char ch;
	do {
		cin >> ch;
		ch = ch & 223;
		cout << ch;
	} while (ch!= 'Q');
	return 0;
}