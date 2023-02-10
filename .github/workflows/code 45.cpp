#include <iostream>
using namespace std;
void disp_binary(unsigned u);
int main()
{
	unsigned u;
	cout << "0 dan 255 gacha son kirirting:";
	cin >> u;
	cout << "hozirgi raqamni ikkilik kodga otkazadi:";
	disp_binary(u);
	cout << "1 gacha bolgan son";
	disp_binary(~u);
	return 0;
}
void disp_binary(unsigned u)
{
	register int t;
	for (t = 128; t > 0; t = t / 2)
		if (u & t) cout << "1";
		else cout << "0";
	cout << "\n";
}