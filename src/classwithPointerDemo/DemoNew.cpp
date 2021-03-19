#include "myString.h"
#include <iostream>
#include <stdlib.h>
#include <new>
using namespace std;

//manage memory on heap
class objDemo {
public:
	int MyData;
public:
	objDemo() {
		std::cout << "Constructor work" << std::endl;
	}
	~objDemo() {
		std::cout << "Distructor work" << std::endl;
	}
};

char* GetMemory(unsigned long size) {
	char* p = new char[size];
	return p;
}
int main(void) {
	//objDemo *pobj = new objDemo();
	//delete pobj;

	/*objDemo *pCtypeObj = (objDemo*)malloc(sizeof(objDemo));
	pCtypeObj->MyData = 10;
	std::cout << pCtypeObj->MyData << std::endl;
	free(pCtypeObj);*/

	//objDemo tmp; //it is stored on stack


	/*try {
		char* p = GetMemory(1024*1024*1024*2);
	}
	catch (const std::bad_alloc &ex) {
		std::cout << ex.what() << std::endl;
	}*/

	/*unsigned char* p = new(std::nothrow) unsigned char[1000 * 1024 * 1024 * 2];
	if (p == NULL)
		std::cout << "Create fail" << std::endl;*/

	//placement new does not alloc memory, 
	//but object construction can be done at known address
	/*char* p = new(std::nothrow) char[4];
	if (p != NULL) {
		long *q = new(p)long(1000);
	}
	else
		std::cout << "Create fail" << std::endl;
	system("pause")
	return 0;*/

	/*
	Conclusion:
	new has two step. First, using malloc to alloc memoey. Second, using placement to do constructor.
	*/


	String s1("hello");
	String s2("c++");
	String s3(s2);
	cout << s3 << endl;
	s3 = s1;
	cout << s3 << endl;
	cout << s2 << endl;
	cout << s1 << endl;
	cin.get();

	return 0;
}
