#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	
	int i;
	//
	for (i = 0; !kbhit(); i++)
		cout << i << " ";
	return 0;
}