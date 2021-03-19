/*#include <iostream>
using namespace std;

//mutable cannot be limited by const
class TestObj {
public:
	mutable int x;
	void func() const{
		x = x + 1;
		cout << x << endl;
	}
};
int main(void) {
	TestObj o;
	o.x = 0;
	o.func();
	cin.get();
	return 0;
}*/