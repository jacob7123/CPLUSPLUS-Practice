/*#include <iostream>
#include <stdlib.h>
#include <locale>

int main(void) {
	setlocale(LC_ALL, "chs");
	wchar_t *p1 = L"12345678abcdefg";
	std::wcout << p1 << std::endl;
	wchar_t *p2 = L"¥xÆW1234567";
	std::wcout << p2 << std::endl;

	//ASCII :ISO-8859-1(one character)
	//Simplified Chinese : GBK, GB2312, GB18380(two character)
	//Traditional Chinese : Big5, UTF-8(three charactor)
	//std::cout << p2 << std::endl;
	system("pause");
	return 0;
}
*/