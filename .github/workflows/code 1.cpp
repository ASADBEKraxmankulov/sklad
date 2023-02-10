#include <iostream>
using namespace std;
class myclass {
    int a, b;
public:
    myclass(int i, int j) { a=i; b=j; }
    friend int sum(myclass x);
};

int sum(myclass x)
{
    return x.a + x.b;
}
int main()
{
    myclass n (3, 4);
    cout << sum(n);
    return 0;
}
