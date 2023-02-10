#include <iostream>
#include <cstdlib>
using namespace std;
void drill();
int hisob;
int num_right;
int main()
{
	cout << "nechta mashqlar ishlaysiz:";
	cin >> hisob;
	num_right = 0;
	do {
		drill(); hisob--;
	} while (hisob);
		cout<< "siz" << num_right << "togri javob berdingiz.\n";
		return 0;
	}
	



	void drill()
	{
		int count;
		int a, b, ans;
		a = rand() % 100;
		b = rand() % 100;
		for (count = 0; count < 3; count++) {
			cout << "nechta boladi" << a << "+" << b << "?";
			cin >> ans;
			if (ans == a + b) {
				cout << "togri\n";
				num_right++;
				return;

			}
			cout << "siz ozingizni hamma imkoniyatlaringizdan foydalandingiz.\n";
			cout << "javob teng" << a + b << '\n';
	}
	
}

