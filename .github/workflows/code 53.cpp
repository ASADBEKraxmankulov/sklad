#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int* i;
	double* j;
	i = (int*)malloc(sizeof(int));
	if (!i) {
		cout << "xotirada joy ajratilmadi,.\n";
		return 1;
	}
	j = (double*)malloc(sizeof(double));
	if (!j) {
		cout << "xotirada joy ajratilamdi.\n";
		return 1;
	}
	*j = 10;
	*j = 10.123;
	cout << *i << ' ' << *j;
	free(i);
	free(j);
	return 0;
}