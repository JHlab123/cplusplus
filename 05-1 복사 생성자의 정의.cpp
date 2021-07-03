#include <iostream>
using namespace std;
#include <cstring>

namespace COMP_POS {
	enum { CLERK = 1, SENIOR, ASSIST, MANAGER };	//사원 주임 대리 과장
}
class NameCard {
	char* name;
	char* corp_name;
	char* number;
	int klass;
public:
	NameCard(const char* str, const char* str1, const char* str2, int a) {
		int len = strlen(str) + 1;
		name = new char[len];
		strcpy_s(name, len, str);	//이거 하려면 포인터로 나타내면 안된다는데..음.. -> sizeof(str1) / sizeof(char)가 아니라 strlen()+1(+1 필수!! 한자리 남겨놓기! 아마 null)을 이용해서 표현해야 오류 안뜸
		len = strlen(str1) + 1;
		corp_name = new char[len];
		strcpy_s(corp_name, len, str1);
		len = strlen(str2) + 1;
		number = new char[len];
		strcpy_s(number, len, str2);
		klass = a;
	}
	void ShowNameCardInfo() {
		cout << "이름: " << name << endl;
		cout << "회사: " << corp_name << endl;
		cout << "전화번호: " << number << endl;
		cout << "직급: ";
		if (klass == 1) {
			cout << "사원" << endl;
		}
		else if (klass == 2) {
			cout << "주임" << endl;
		}
		else if (klass == 3) {
			cout << "대리" << endl;
		}
		else if (klass == 4) {
			cout << "과장" << endl;
		}
		cout << endl;
	}
	NameCard(const NameCard& copy):klass(copy.klass) {
		name = new char[strlen(copy.name) + 1];
		strcpy_s(name, strlen(copy.name) + 1, copy.name);
		corp_name = new char[strlen(copy.corp_name) + 1];
		strcpy_s(corp_name, strlen(copy.corp_name) + 1, copy.corp_name);
		number = new char[strlen(copy.number) + 1];
		strcpy_s(number, strlen(copy.number) + 1, copy.number);
	}
};

int main(void) {
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	NameCard copy1 = manClerk;
	NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
	NameCard copy2 = manSENIOR;
	copy1.ShowNameCardInfo();
	copy2.ShowNameCardInfo();
	return 0;
}