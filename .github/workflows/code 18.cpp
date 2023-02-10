#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;
char* fortunes[] = {
"sizning hayotingizga sevgi kirib keladi\n",
"siz uzoq va baxtli hayot kechirasiz \n ",
"hozir tikkan pulingiz qaytib keladi \n",
"sizning yaqin dostingiz sizni izlaydi \n",
};
int main()
{
	int chance;
	cout << "bahtingni ochaymi tahtingnimi, unda bitta sonni bosing: ";
	while (!kbhit()) rand();
	cout << '\n'; 
	chance = rand();
	chance = chance % 5;
	cin >> chance;
	cout << fortunes[chance];

	return 0;
}