#include <iostream>
using namespace std;

int main(void) {
	const int num = 12;
	const int* ptr1 = &num;
	const int& num1 = num;

	cout << num << *ptr1 << num1 << endl;

	return 0;
}