#include <iostream>
using namespace std;

int main(int argc,char *argv[])
{
	if (argc != 2) {
		cout << "siz ismingizni kiritishni unutdingiz,\n";
		return 1;
}
	cout << "salom," << argv[1] << '\n';
	return 0;
}
