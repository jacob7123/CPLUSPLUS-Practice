/*#include <iostream>
#include <stdlib.h>

void go(int num) {
	std::cout << "I am INT overwrite fun" << std::endl;
}
void go(void *p) {
	std::cout << "I am pointer overwrite fun" << std::endl;
}

int main(void) {
	//In c++, if you want to initialize pointer, you should use nullptr.
	void *ptr = NULL;
	go(ptr);//Which func will be call?
	//go(NULL);//it will have different answer if you run it on different platform.
	go(nullptr);
	system("pause");
	return 0;
}*/