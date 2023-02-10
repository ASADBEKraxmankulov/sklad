#include <iostream>
using namespace std;
class myclass {
public:
	myclass() { cout << "oddiy konstruksiya\n"; }
	myclass(const myclass& obj) { cout << "kunstruksiya nushasi\n"; 
	}
};
myclass f()
{
	myclass ob;
	return ob;
}
int main()
{
	myclass a;
	a = f();
	return 0;
}