#include <iostream>
using namespace std;
class widget {
	int i;
	int j;
public:
	widget(int a, int b);
	void put_widget();

};
widget::widget(int a, int b)
{
	i = a; j = b;
}
void widget::put_widget()
{
	cout << i << " " << j << "\n";
}
int main()
{
	widget x(10, 20), y(0, 0);
	x.put_widget();
	y.put_widget();
	return 0;

}