#include <bits/stdc++.h>
using namespace std;

class MyVector {
private:
	int *arr;
	int len;

public:
	MyVector(int len = 100, int default_value = 0) {
		this->len = len;
		this->arr = new int[len];

		for (int i = 0; i < len; ++i) {
			this->arr[i] = default_value;
		}
	}

	MyVector(const MyVector & another) {
		len = another.len;
		this->arr = new int[len];

		for (int i = 0; i < len; ++i)
			arr[i] = another.arr[i];
	}

	~MyVector() {
		delete[] this->arr;
	}

	int Get(int pos) {
		if (pos < len)
			return this->arr[pos];
		else {
			cout<<"Invalid access\n";
			return -1;
		}

	}

	void Set(int pos, int val = 0) {
		if (pos < len)
			this->arr[pos] = val;
		else
			cout<<"Invalid access\n";
	}

	// Breaks Data-Hiding concept. User has access to private data and can corrupt the system

	const int& GetLen() {
		return len;
	}
};

int main() {
	MyVector v(10, 12345);

	cout<<v.Get(4)<<"\n";
	const int &l = v.GetLen();

	cout<<v.Get(4)<<"\n";



	return 0;
}