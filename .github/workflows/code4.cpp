#include <iostream>
#include <cstdlib>
using namespace std;
int main()

{
	int magic;
	int tahmin;
	magic = rand();

	cout << "tanlagan soningizni kiriting";
	cin >> tahmin;

	if (tahmin == magic)

{
	cout << "** togri **/n";
	cout << magic << "bunaqa son bor/n";
}

	else {
		cout << "son  notogri";
		if (tahmin > magic) cout << "sizning raqamingiz oshib ketdi. /n";
		else cout << "sizning raqamingiz kamroq./n";
	}
	
		return 0;
	}