#include <iostream>
using namespace std;

//����1
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
//	cout << "������: " << number << endl;
//
//	rev(number);
//	cout << "��ȣ��ȯ�̿�: " << number << endl;
//
//	return 0;
//}

//����2
//�����ڴ� ����� ������� ������ �� ���� �����̴�.

//����3
int SwapPointer(int* ptr1, int* ptr2) {
	/*int* temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;*/
	int temp = *ptr1;
	*ptr1 = *ptr2;		//�� ����� �ϸ� ������ �ȵ�. �ּҰ��� �ٲٴ� �� �ȵǴ°ǰ�
	*ptr2 = temp;		//�ּҰ��� �ٲܰŸ� ������ �Ű������� ��� �ͼ� ������ �ּҰ� ������ �ؾ��ҵ��ѵ� �װ͵� �Ϻ��ϰ� ���� �������� �Ű������� ������ ������ �� �ٸ� �����̹Ƿ�
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