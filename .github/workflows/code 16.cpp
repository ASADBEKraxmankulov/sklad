#include <iostream>
#include <cctype>
using namespace std;
int main()
{
	char str[20] = "codder amirxon";
	char* p;
	int i;
	p = str;
	for (i = 0; p[i]; i++) p[i] = toupper(p[i]);
	cout << p;
	return 0;
}