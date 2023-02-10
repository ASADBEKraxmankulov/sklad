#include <iostream>
using namespace std;
void cube(int* n, int num);
int main()
{
	int i, nums[10];
	for (i = 0; i < 10; i++) nums[i] = i + 1;
	cout << "massiv nimadan iborat:";
	for (i = 0; i < 10; i++) cout << nums[i] << ' ';
	cout << '\n';
	cube(nums, 10);
	cout << "ozgartirilgan versiyasi:";
	for (i = 0; i < 10; i++) cout << nums[i] << ' ';
	return 0;
}
void cube(int* n, int num)
{
	while (num) {
		*n = *n * *n * *n;
		num--;
		n++;
	}
}