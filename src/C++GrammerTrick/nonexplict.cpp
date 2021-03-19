#include <iostream>
using namespace std;

class FClass {
public:
	explicit FClass(int _data) : data(_data) {

	}
	operator double() const {
		return (double)data;
	}
private:
	int data;
};
int main(void) {
	//FClass f(1);
	//double res = 4 + f; // this f is a non explicit
	//cout << res << endl;

	//FClass f2 = f + 4; //it should fail
	cout << __cplusplus << endl;
	cin.get();
	return 0;
}