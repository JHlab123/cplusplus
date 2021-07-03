#include <iostream>
using namespace std;
#include <cstring>
#define _CRT_SECURE_NO_WARNINGS
//문제1
//class Car	//기본 연료 자동차
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
//class HybridCar : public Car	//하이브리드 자동차
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
//class HybridWaterCar : public HybridCar	//기본 연료 자동차
//{
//private:
//	int waterGauge;
//public:
//	HybridWaterCar(int n) : HybridCar(n), waterGauge(n)
//	{}
//	void ShowCurrentGauge() {
//		cout << "잔여 가솔린: " << GetGasGauge() << endl;
//		cout << "잔여 전기량: " << GetElecGauge() << endl;
//		cout << "잔여 워터량: " << waterGauge << endl;
//	}
//};
//
//
//int main(void) {
//	HybridWaterCar car1(10);
//	car1.ShowCurrentGauge();
//	return 0;
//}


//문제2
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
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
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
	MyFriendDetailInfo(const char* myname, int n, const char* address, const char* number) : MyFriendInfo(myname, n){  //c++에서는 문자열 상수를 const로 취급해서 const가 아닌 char*(const가 아님) 형은 하면 오류나옴 -> 매개변수에 const를 써주면 그 문자열 값은 없애지 못하지만 해결할 수 있다. 매개변수의 그걸 입력받은 것(즉 const가 아닌것으로 한다면 매개변수에 const를 안붙여도 실행이 될 것이다. 즉 문자열 상수를 입력해서 const를 쓴것! https://m.blog.naver.com/PostView.naver?isHttpsRedirect=true&blogId=tipsware&logNo=221188819292
		addr = new char[strlen(address) + 1];
		strcpy_s(addr, strlen(address)+1, address);
		phone = new char[strlen(number) + 1];
		strcpy_s(phone, strlen(number) + 1, number);
	}
	void ShowMyFriendDetailInfo() {
		ShowMyFriendInfo();
		cout << "주소: " << addr << endl;
		cout << "전화: " << phone << endl << endl;
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