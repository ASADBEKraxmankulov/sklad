#include <iostream>
using namespace std;
int div_zero();
int main()
{
	int i, j, result;
	cout << "boluvchi va bolinuvchini yozing:";
	cin >> i >> j;
	result = j ? i / j : div_zero();
	cout << "javob:" << result;
	return 0;
}
int div_zero()
{
	cout << "nolga bolish mumkin emas> \n";
	return 0;
}