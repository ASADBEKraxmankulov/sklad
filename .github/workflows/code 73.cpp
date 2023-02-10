#include <iostream>
using namespace std;
union u_type {
	u_type(short int a);
	void showchars();
	short int i;
	char ch[2];
};
u_type::u_type(short int a)
{
	i = a;
}
void u_type::showchars()
{
	cout << ch[0] << " ";
	cout << ch[1] << "\n";

}
int main()
{
	u_type u(1000);
	u.showchars();
	return 0;
}