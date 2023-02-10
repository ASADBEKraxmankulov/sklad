#include <iostream>
using namespace std;
enum apple { Jonathon, Golden_Del, Red_del, Winesap, Cortland, McIntosh };
char name[][20] = {
	"Jonathon",
	"Golden Delicious",
	"Red Delicious",
	"winesap",
	"cortland",
	"McIntosh",
};
int main()
{
	apple fruit;
	fruit = Jonathon;
	cout << name[fruit] << '\n';
	fruit = Winesap;
	cout << name[fruit] << '\n';
	fruit = McIntosh;
	cout << name[fruit] << '\n';
	return 0;
}