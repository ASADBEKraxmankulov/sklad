#include <iostream>
#include <cstdlib>
using namespace std;
class myclass {
	int* p;
public:
	myclass(int i);
	myclass(const myclass& ob);
	~myclass();
	int getval() { return *p; }

};
myclass::myclass(const myclass& ob)
{
	p = new int;
	*p = *ob.p;
	cout << "konstruktor uchun xotira ajratish\n";

}
myclass::myclass(int i)
{
	cout << "oddiy konstruktor uchun xotira ajratish\n";
	p = new int;
	*p = i;
}
myclass::~myclass()
{
	cout << "hotirani boshatish.\n";
	delete p; 
}
int main()
{
	myclass a(10);
	myclass b = a;
	return 0;
}