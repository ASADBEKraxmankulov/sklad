#include <iostream>
using namespace std;
struct stype {
	int a, b;
};
int main()
{
	stype svar1, svar2;
	svar1.a = svar1.b = 10;
	svar2.a = svar2.b = 20;
	cout << "ozgartirilishdan oldingi strukturani holat.\n";
	cout << "svar1:" << svar1.a << ' ' << svar1.b;
	cout << '\n';
	cout << "svar2:" << svar2.a << ' ' << svar2.b;
	cout << "\n\n";
	svar2 = svar1;
	cout << "ozlashtirilishidan keyingi strukturani holati.\n";
	cout << "svar1:" << svar1.a << ' ' << svar1.b;
	cout << '\n';
	cout << "svar2:" << svar2.a << ' ' << svar2.b;
	return 0;
}