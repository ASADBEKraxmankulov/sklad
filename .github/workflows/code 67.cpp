#include <iostream> 
using namespace std;
class myclass {
	int a;
public:
	int b;
	void setab(int i);
	int geta();
	void reset();
};
void myclass::setab(int i)
{
	a = i;
	b = i * i;
}
int myclass::geta()
{
	return a;
}

void myclass::reset()

{
	setab(0);
	}


int main()
{
	myclass ob;
	ob.setab(5);
	cout << "obyektni setab 5 ning chaqirilgandan keyingi holati(5):";
	cout << ob.geta() << ' ';
	cout << ob.b;
	cout << '\n';
	ob.b = 20;
	cout << "ob obyektni ob.b20 sozlangandan keyingi holati:";
	cout << ob.geta() << ' ';
	cout << ob.b;
	cout << '\n';
	ob.reset();
	cout << "ob obyektni reset funksiyaini chaqirilgandan keyingi holati:";
	cout << ob.geta() << ' ';
	cout << ob.b;
	cout << '\n';
	return 0;
	}