#include <iostream>
using namespace std;
#include <cstring>

//¹®Á¦1
//class Calculator {
//private:
//	int add;
//	int min;
//	int mul;
//	int div;
//public:
//	void Init();
//	double Add(double a, double b);
//	double Min(double a, double b);
//	double Mul(double a, double b);
//	double Div(double a, double b);
//	void ShowOpCount();
//};
//
//void Calculator::Init() {
//	add = 0;
//	min = 0;
//	mul = 0;
//	div = 0;
//}
//
//double Calculator::Add(double a, double b) {
//	add++;
//	return a + b;
//}
//
//double Calculator::Min(double a, double b) {
//	min++;
//	return a - b;
//}
//
//double Calculator::Mul(double a, double b) {
//	mul++;
//	return a * b;
//}
//
//double Calculator::Div(double a, double b) {
//	div++;
//	return a / b;
//}
//
//void Calculator::ShowOpCount() {
//	cout << "µ¡¼À: " << add << " »¬¼À: " << min << " °ö¼À: " << mul << " ³ª´°¼À: " << div << endl;
//}
//int main(void) {
//	Calculator cal;
//	cal.Init();
//	cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << endl;
//	cout << "3.5 / 1.7 = " << cal.Div(3.5, 1.7) << endl;
//	cout << "2.2 - 1.5 = " << cal.Min(2.2, 1.5) << endl;
//	cout << "4.9 + 1.2 = " << cal.Div(4.9, 1.2) << endl;
//	cal.ShowOpCount();
//	return 0;
//}

//¹®Á¦2
class Printer {
private:
	char str[20];
public:
	void SetString(const char* str);
	void ShowString();
};

void Printer::SetString(const char* str1) {
	strcpy_s(str, sizeof(str)/sizeof(char), str1);
}

void Printer::ShowString() {
	cout << str << endl;
}

int main(void) {
	Printer pnt;
	pnt.SetString("Hello world!");
	pnt.ShowString();

	pnt.SetString("I love C++");
	pnt.ShowString();
	return 0;
}