#include <iostream>
#include <cstdlib>
using namespace std;
class myclass {
	int* p;
public:
	myclass(int i);
	~myclass();
	int getval() { return *p; }

};
myclass::myclass(int i)
{
	cout << "ukazatel p bilan hotirani belgish\n";
	p = new int;
	*p = i;
}
myclass::~myclass()
{
	cout << "p ukazatel bilan hotirani tozalash\n";
	delete p;
}
void display(myclass& ob)
{
	cout << ob.getval() << '\n';
}
int main()
{
	myclass a(10);
	display(a);
	return 0;
}