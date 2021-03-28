#include<iostream>
#include<typeinfo>
using namespace std;
template <typename T>
class My {
public:
	void f(const T&t) {
		cout << typeid(t).name() << endl;
	}
};
int main() {
	My<int>obj1;
	My < float>obj2;
	obj1.f(2);
	obj2.f(2);
	return 0;
}