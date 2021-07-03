#include <iostream>
using namespace std;
#include <cstring>
#define _CRT_SECURE_NO_WARNINGS
//����1
//class Car	//�⺻ ���� �ڵ���
//{
//private:
//	int gasolineGauge;
//public:
//	Car(int n) : gasolineGauge(n)
//	{}
//	int  GetGasGauge() {
//		return gasolineGauge;
//	}
//};
//
//class HybridCar : public Car	//���̺긮�� �ڵ���
//{
//private:
//	int electricGauge;
//public:
//	HybridCar(int n) : Car(n), electricGauge(n)
//	{}
//	int  GetElecGauge() {
//		return electricGauge;
//	}
//};
//
//class HybridWaterCar : public HybridCar	//�⺻ ���� �ڵ���
//{
//private:
//	int waterGauge;
//public:
//	HybridWaterCar(int n) : HybridCar(n), waterGauge(n)
//	{}
//	void ShowCurrentGauge() {
//		cout << "�ܿ� ���ָ�: " << GetGasGauge() << endl;
//		cout << "�ܿ� ���ⷮ: " << GetElecGauge() << endl;
//		cout << "�ܿ� ���ͷ�: " << waterGauge << endl;
//	}
//};
//
//
//int main(void) {
//	HybridWaterCar car1(10);
//	car1.ShowCurrentGauge();
//	return 0;
//}


//����2
class MyFriendInfo {
private:
	char* name;
	int age;
public:
	MyFriendInfo(const char* myname, int n) : age(n){
		name = new char[strlen(myname) + 1];
		strcpy_s(name, strlen(myname) + 1, myname);
	}
	void ShowMyFriendInfo() {
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;
	}
	~MyFriendInfo() {
		delete[]name;
	}
};

class MyFriendDetailInfo : public MyFriendInfo {
private:
	char* addr;
	char* phone;
public:
	MyFriendDetailInfo(const char* myname, int n, const char* address, const char* number) : MyFriendInfo(myname, n){  //c++������ ���ڿ� ����� const�� ����ؼ� const�� �ƴ� char*(const�� �ƴ�) ���� �ϸ� �������� -> �Ű������� const�� ���ָ� �� ���ڿ� ���� ������ �������� �ذ��� �� �ִ�. �Ű������� �װ� �Է¹��� ��(�� const�� �ƴѰ����� �Ѵٸ� �Ű������� const�� �Ⱥٿ��� ������ �� ���̴�. �� ���ڿ� ����� �Է��ؼ� const�� ����! https://m.blog.naver.com/PostView.naver?isHttpsRedirect=true&blogId=tipsware&logNo=221188819292
		addr = new char[strlen(address) + 1];
		strcpy_s(addr, strlen(address)+1, address);
		phone = new char[strlen(number) + 1];
		strcpy_s(phone, strlen(number) + 1, number);
	}
	void ShowMyFriendDetailInfo() {
		ShowMyFriendInfo();
		cout << "�ּ�: " << addr << endl;
		cout << "��ȭ: " << phone << endl << endl;
	}
	~MyFriendDetailInfo() {
		delete[]addr;
		delete[]phone;
	}
};

int main(void) {
	MyFriendDetailInfo Hak("Kim", 20, "Jong", "01033279043");
	Hak.ShowMyFriendDetailInfo();
	return 0;
}