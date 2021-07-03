#include <iostream>
using namespace std;

//class Rectangle
//{
//private:
//	int hori;
//	int verti;
//public:
//	Rectangle(int a, int b) :hori(a), verti(b) {}
//	void ShowAreaInfo() {
//		cout << "����: " << hori * verti << endl;
//	}
//};
//
//class Square : public Rectangle
//{
//private:
//	int r;
//public:
//	Square(int a): Rectangle(a,a) {}
//	//ShowAreaInfo�� �� ������ ���� ������� ���� Rectangle�� �Լ��� �̿��� �� �ֱ� �����̴�.
//};
//
//int main(void)
//{
//	Rectangle rec(4, 3);
//	rec.ShowAreaInfo();
//
//	Square sqr(7);
//	sqr.ShowAreaInfo();
//	return 0;
//}

//����2
class Book
{
private:
	char* title;	//å�� ����
	char* isbn;		//����ǥ�ص�����ȣ
	int price;		//å�� ����
public:
	Book(const char* name, const char* number, int n) :price(n) {
		int len = strlen(name) + 1;
		title = new char[len];
		strcpy_s(title, len, name);
		len = strlen(number) + 1;
		isbn = new char[len];
		strcpy_s(isbn, len, number);
	}
	void ShowBookInfo() {
		cout << "����: " << title << endl;
		cout << "ISBN: " << isbn << endl;
		cout << "����: " << price << endl;
	}
	~Book(){
		delete[]title;
		delete[]isbn;
	}
};

class EBook : public Book
{
private:
	char* DRMKey;	//���Ȱ��� Ű
public:
	EBook(const char* name, const char* number, int n, const char* key) :Book(name, number, n) {
		int len = strlen(key) + 1;
		DRMKey = new char[len];
		strcpy_s(DRMKey, len, key);
	}
	void ShowEBookInfo() {
		ShowBookInfo();
		cout << "����Ű: " << DRMKey << endl;
	}
	~EBook() {
		delete[]DRMKey;
	}
};

int main(void) {
	Book book("���� C++", "555-12345-890-0", 20000);
	book.ShowBookInfo();
	cout << endl;
	EBook ebook("���� C++ ebook", "555-12345-890-1", 10000, "fdx9w0i8kiw");
	ebook.ShowEBookInfo();
	return 0;
}