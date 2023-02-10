#include <iostream>
using namespace std;
int r_avg(int i);
int main()
{
	int num;
	do {
		cout << "sonni kiriting(-1 chiqishni bildiradi):";
		cin >> num;
		if (num != -1)
			cout << "hozirgi ortanchasi:" << r_avg(num);
		cout << '\n';

	} while (num > -1);
	return 0;
}
int r_avg(int i)
{
	static int sum = 0, count = 0;
	sum = sum + i;
	count++;
	return sum / count;
}