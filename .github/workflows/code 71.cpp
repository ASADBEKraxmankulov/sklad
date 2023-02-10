#include <iostream>
using namespace std;
class myclass {
	int a;
public:
	myclass(int x);
	int get_a();
};
myclass::myclass(int x)
{
	a = x;
}
int myclass::get_a()
{
	return a;
}
int main()
{
	myclass ob = 4;
	cout << ob.get_a();
	return 0;
}