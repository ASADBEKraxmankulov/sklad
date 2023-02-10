#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
class timer{
    int second;
public:
    timer(char *t) { second = atoi (t); }

    timer(int t) { second  = t; }

    timer(int min, int sec) { second = min*60 + sec; }

    void run();
};
void timer::run()
{
    clock_t t1;
    t1 = clock();
    while( (clock()/CLOCKS_PER_SEC - t1/CLOCKS_PER_SEC)<second);
    cout << "\a";
}
int mian()
{
    timer a(10), b("20"), c(1,10);

    a.run();
    b.run();
    c.run();

    return 0;
}

