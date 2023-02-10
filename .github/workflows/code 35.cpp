#include <iostream>
using namespace std;
int main()
{
	extern int first, last;
	cout << first << " " << last << "\n";
	return 0;
}
int first = 10, last = 20;