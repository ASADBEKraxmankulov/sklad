#include <iostream>
using namespace std;
void code(const char* str);
int main()
{
	code("bu test");
	return 0;
}
void code(const char* str)
{
	while (*str) {
		cout << (char)(*str + 1);
		str++;
	}
}