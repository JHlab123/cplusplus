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
//		cout << "면적: " << hori * verti << endl;
//	}
//};
//
//class Square : public Rectangle
//{
//private:
//	int r;
//public:
//	Square(int a): Rectangle(a,a) {}
//	//ShowAreaInfo는 쓸 이유가 없다 상속으로 인해 Rectangle의 함수를 이용할 수 있기 때문이다.
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

//문제2
class Book
{
private:
	char* title;	//책의 제목
	char* isbn;		//국제표준도서번호
	int price;		//책의 정가
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
		cout << "제목: " << title << endl;
		cout << "ISBN: " << isbn << endl;
		cout << "가격: " << price << endl;
	}
	~Book(){
		delete[]title;
		delete[]isbn;
	}
};

class EBook : public Book
{
private:
	char* DRMKey;	//보안관련 키
public:
	EBook(const char* name, const char* number, int n, const char* key) :Book(name, number, n) {
		int len = strlen(key) + 1;
		DRMKey = new char[len];
		strcpy_s(DRMKey, len, key);
	}
	void ShowEBookInfo() {
		ShowBookInfo();
		cout << "인증키: " << DRMKey << endl;
	}
	~EBook() {
		delete[]DRMKey;
	}
};

int main(void) {
	Book book("좋은 C++", "555-12345-890-0", 20000);
	book.ShowBookInfo();
	cout << endl;
	EBook ebook("좋은 C++ ebook", "555-12345-890-1", 10000, "fdx9w0i8kiw");
	ebook.ShowEBookInfo();
	return 0;
}