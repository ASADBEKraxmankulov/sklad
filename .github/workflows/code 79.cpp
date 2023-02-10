#include <iostream>
using namespace std;
class samp {
	int a, b;
public:
	samp(int n, int m) { a = n; b = m; }
	int get_a() { return a; }
	int get_b() { return b; }

};
int main()
{
	samp sampArray[4][2] = {
		samp(1,2),
		samp(3,4),
		samp(5,6),
		samp(7,8),
		samp(9,10),
		samp(11,12),
		samp(13,14),
		samp(15,16),
	};
	int i;
	for (i = 0; i < 4; i++) {
		cout << sampArray[i][0].get_a() << ' ';
		cout << sampArray[i][0].get_b() << "\n";
		cout << sampArray[i][1].get_a() << ' ';
		cout << sampArray[i][1].get_b() << "\n";
	}
	cout << "\n";
	return 0;
}