/*#include <iostream>
#include <functional>
using namespace std;
using namespace std::placeholders;
//Functor:create a fun ptr, and using a public method in structure or in class.

struct MyStruct{
	void add(int a) {
		cout << a << endl;
	}
	void add2(int a, int b) {
		cout << a + b << endl;
	}
	void add3(int a, int b, int c) {
		cout << a + b + c << endl;
	}
};
int main(void) {
	MyStruct s;
	auto func  = bind(&MyStruct::add, &s, _1);
	auto func2 = bind(&MyStruct::add2, &s, _1, _2);
	auto func3 = bind(&MyStruct::add3, &s, _1, _2, _3);
	func(10);
	func2(1000, 2000);
	func3(10, 20, 30);
	cin.get();
	return 0;
}*/