#include <iostream>
using namespace std;
class OBJ {
	int i;
public:
	void set_I(int x) { i = x; }
	void out_i() { cout << i << " "; }
};
void f(OBJ x)
{
	x.out_i();
	x.set_I(100);
	x.out_i();

}
int main()
{
	OBJ o;
	o.set_I(10);
	f(o);
	o.out_i();
	return 0;
}