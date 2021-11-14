#include <iostream>
#include <string>
using namespace std;

class InitializerList {
private:
	int a;
	int b;
	int c;
	string name;
public:
	InitializerList(int A, int B, int C, string name_):
	b(A),a(B),c(C), name(name_){}
	void print() {
		cout << a << " " << b << " " << c << endl;
	}
	~InitializerList()
	{
		cout << name <<endl;
	}
};

int main()
{
	InitializerList x(1,2,3, "First");
	x.print();
	InitializerList y(1, 2, 3, "Second");
	return 0;
}