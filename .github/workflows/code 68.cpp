#include <iostream>
using namespace std;
class queue {
	int q[100];
	int sloc, rloc;
public:
	queue();
	~queue();
	void qput(int i);
	int qget();
};
queue::queue()
	{
		sloc = rloc = 0;
cout << "qator buzildi.\n";
	}
	queue::~queue()
	{
		cout << "ocherd buzildi.\n";
	}
	void queue::qput(int i)
	{
		if (sloc == 100) {
			cout << "ocherd toldi.\n";
			return;
		}
		sloc++;
		q[sloc] = i;
	}
	int queue::qget()
	{
		if (rloc == sloc) {
			cout << "ocherd bosh.\n";
			return 0;
		}
		rloc++;
		return q[rloc];

	}
	int main()
	{
		qeue a, b;
		a.qput(10);
		b.qput(19);
		a.qput(20);
		b.qput(1);
		cout << a.qget() << " ";
		cout << a.qget() "\n";
		cout << b.qget() << " ";
		cout << b.qget() << "\n";
			
	}
	



