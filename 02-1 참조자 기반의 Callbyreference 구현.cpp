#include <iostream>
using namespace std;

//문제1
//int increase(int &num) {
//	num += 1;
//	return 0;
//}
//int rev(int &num) {
//	num *= -1;
//	return 0;
//}
//int main(void) {
//	int number = 0;
//	increase(number);
//	cout << "증가요: " << number << endl;
//
//	rev(number);
//	cout << "부호변환이요: " << number << endl;
//
//	return 0;
//}

//문제2
//참조자는 상수를 대상으로 선언할 수 없기 때문이다.

//문제3
int SwapPointer(int* ptr1, int* ptr2) {
	/*int* temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;*/
	int temp = *ptr1;
	*ptr1 = *ptr2;		//이 위대로 하면 실행이 안됨. 주소값만 바꾸는 건 안되는건가
	*ptr2 = temp;		//주소값만 바꿀거면 변수를 매개변수로 들고 와서 변수의 주소값 ㅇㅈㄹ 해야할듯한데 그것도 완벽하게 맞진 않을지도 매개변수는 변수를 복사한 또 다른 변수이므로
	return 0;
}
int main(void) {
	int num1 = 5;
	int* ptr1 = &num1;
	int num2 = 10;
	int* ptr2 = &num2;
	SwapPointer(ptr1, ptr2);

	cout << *ptr1 << " " << *ptr2 << endl;
	return 0;
}