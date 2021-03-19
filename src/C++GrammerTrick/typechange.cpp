/*#include <iostream>
using namespace std;

int main(void) {
	//void* p   = new int[10];
	//int* pInt = (int*)p;//C style

	//cout << static_cast<int>(3.14) << endl;
	//int* p = static_cast<int*>(malloc(100));

	int num = 99;
	char* p = reinterpret_cast<char*>(&num);
	cout << p;
	cin.get();
	return 0;
}*/