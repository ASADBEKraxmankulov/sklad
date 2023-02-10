#include <iostream>
using namespace std;
void f1();
int main()
{
	char str[] = "bu massiv str funksiya main().";
	cout << str << '\n';
	f1();
	cout << str << '\n';
	return 0;
}

void f1()
{
	char str[80];
	cout << "hohlagan qatoringizni tanlang:";
	cin >> str;
	cout << str << '\n';
}