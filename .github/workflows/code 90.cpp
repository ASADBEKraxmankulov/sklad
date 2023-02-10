#include <iostream>
#include <cstdlib>
using namespace std;
class myclass {
	int* p;
public:
	myclass(int  i);
	myclass(const myclass& ob);
	~myclass();
	int getval() { return *p; }
};
myclass::myclass(const myclass& obj)
{
	p = new int;
	*p = *obj.p;
	cout << "konstruktor nushasi chaqirildi.\n";
}
myclass::myclass(int i)
{
	cout << "ukazatel p korsatilgan joyga hotira ajratish.\n";
	p = new int;
	*p = i;
}
myclass::~myclass()
{
	cout << "ukazatel p bilan hotirani boshatish.\n";
	delete p;
}
void display(myclass ob)
{
	cout << ob.getval() << '\n';

}
int main()
{
	myclass a(10);
	display(a);
	return 0;
}