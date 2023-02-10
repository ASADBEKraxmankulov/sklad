#include <iostream>
using namespace std;
void disp_binary(unsigned u);
union swap_bytes {
	short int num;
	char ch[2];
};
int main()
{
	swap_bytes sb;
	char temp;
	sb.num = 15;
	cout << "hozirgi bayt:";
	disp_binary(sb.ch[1]);
	cout << " ";
	disp_binary(sb.ch[0]);
	cout << "\n\n";
	temp = sb.ch[0];
	sb.ch[0] = sb.ch[1];
	sb.ch[1] = temp;
	cout << "almashtirilgandan keyingi holat:";
	disp_binary(sb.ch[1]);
	cout << " ";
	disp_binary(sb.ch[0]);
	cout << "\n\n";
	return 0;
}
void disp_binary(unsigned u)
{
	register int t;
	for (t = 128; t > 0; t = t / 2)
		if (u & t) cout << "1 ";
		else cout << "0 ";

}