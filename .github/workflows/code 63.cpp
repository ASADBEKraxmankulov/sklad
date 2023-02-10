#include <iostream>
using namespace std;
int main()
{
	union {
		short int count;
		char ch[2];
	};
	ch[0] = 'X';
	ch[1] = 'Y';
	cout << "simvillarning birikmasi:" << ch[0] << ch[1] << '\n';
	cout << "butun sondagi birikma:" << count << '\n';
	return 0;

}