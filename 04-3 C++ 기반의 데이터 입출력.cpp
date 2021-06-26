#include <iostream>
using namespace std;
#include <cstring>
//����1
//class Point {
//private:
//	int xpos, ypos;
//public:
//	Point(int x, int y) : xpos(x), ypos(y) {
//		//empty
//	}
//	void ShowPointInfo() const {
//		cout << "[" << xpos << ", " << ypos << "]" << endl;
//	}
//};
//
//class Circle {
//private:
//	Point a;
//	int r;
//public:
//	Circle(int x, int y, int r_1) :a(x, y), r(r_1) {
//		//empty
//	}
//	void ShowCircleInfo() const {
//		cout << "radius: " << r << endl;
//		a.ShowPointInfo();
//	}
//};
//
//class Ring {
//private:
//	Circle a;
//	Circle b;
//public:
//	Ring(int x, int y, int z, int x1, int y1, int z1) : a(x, y, z), b(x1, y1, z1) {
//		//empty
//	}
//	void ShowRingInfo() const {
//		cout << "Inner Circle Info..." << endl;
//		a.ShowCircleInfo();
//		cout << "Outter Circle Info..." << endl;
//		b.ShowCircleInfo();
//	}
//};
//int main(void) {
//	Ring ring(1, 1, 4, 2, 2, 9);
//	ring.ShowRingInfo();
//	return 0;
//}

//����2
namespace COMP_POS {
	enum { CLERK=1, SENIOR, ASSIST, MANAGER };	//��� ���� �븮 ����
}
class NameCard {
	char name[20];
	char corp_name[20];
	char number[20];
	int klass;
public:
	NameCard(const char* str, const char* str1, const char* str2, int a) {
		int len = strlen(str) + 1;
		//name = new char[len];
		strcpy_s(name, sizeof(name) / sizeof(char), str);	//�̰� �Ϸ��� �����ͷ� ��Ÿ���� �ȵȴٴµ�..��..
		//len = strlen(str1) + 1;
		//corp_name = new char[len];
		strcpy_s(corp_name, sizeof(corp_name) / sizeof(char), str1);
		//len = strlen(str2) + 1;
		//number = new char[len];
		strcpy_s(number, sizeof(number) / sizeof(char), str2);
		klass = a;
	}
	void ShowNameCardInfo() {
		cout << "�̸�: " << name << endl;
		cout << "ȸ��: " << corp_name << endl;
		cout << "��ȭ��ȣ: " << number << endl;
		cout << "����: ";
		if (klass == 1) {
			cout << "���" << endl;
		}
		else if (klass == 2) {
			cout << "����" << endl;
		}
		else if (klass == 3) {
			cout << "�븮" << endl;
		}
		else if (klass == 4) {
			cout << "����" << endl;
		}
		cout << endl;
	}
};

int main(void) {
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
	NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);
	manClerk.ShowNameCardInfo();
	manSENIOR.ShowNameCardInfo();
	manAssist.ShowNameCardInfo();
	return 0;
}