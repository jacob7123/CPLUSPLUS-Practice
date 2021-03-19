/*#include <iostream>
using namespace std;

int add(int a, int b) {
	return a + b;
}

typedef int(*ADD)(int a, int b);
using FUNC = int(*)(int a, int b);
using co   = std::ios_base::fmtflags;
int main(void) {
	ADD p = add;
	cout << p(1, 2) << endl;
	FUNC func = add;
	cout << func(3, 4) << endl;
	cin.get();
	return 0;
}*/