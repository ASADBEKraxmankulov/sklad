#include <iostream>
#include <ctime>
using namespace std;
unsigned int i;
unsigned int delay;
int main()
{
	register unsigned int j;
	long start, end;
	start = clock();
	for (delay = 0; delay < 50; delay++)
		for (i = 0; i < 64000000; i++);
	end = clock();
	cout << "tikilash soni";
	cout << end - start << '\n';
	start = clock();
	for (delay = 0; delay < 50; delay++)
		for (j = 0; j < 64000000; j++);
	end = clock();
	cout << "tikilash soni:";
	cout << end - start << '\n';
	return 0;
}