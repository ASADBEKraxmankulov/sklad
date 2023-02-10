#include <iostream>
using namespace std;
class myclass {
    int a, b;
public:
    myclass(int i, int j) { a=i; b=j; }
    void showab();
};
void myclass::showab()
{
    cout << "a teng" << a << '\n';
    cout << "b teng" << b << '\n';
}
int main()
{
    myclass ob1, ob2;

    ob1.setab(10, 20);
    ob2.setab(0, 0);

    cout << "OBYEKT ob1 TAYINLASHIDAN OLDIN: \n";
    ob1.showab();
    cout << "OBYEKT ob2 TAYINLASHIDAN OLDIN: \n";
    ob2.showab();

    cout << '\n';
    ob2 = ob1;

    cout << "OBYEKT ob1 TAYINLASHIDAN OLDIN: \n";
    ob1.showab();
    cout << "OBYEKT ob2 TAYINLASHIDAN OLDIN: \n";
    ob2.showab();

    return 0
};
