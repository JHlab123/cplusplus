//����� ���Ÿ� �������� 0���� ���� ���� ������ �� ����.

#include <iostream>
using namespace std;

class FruitSeller {
private:
	int APPLE_PRICE;
	int numOfApples;
	int myMoney;

public:
	void InitMembers(int price, int num, int money) {
		APPLE_PRICE = price;
		numOfApples = num;
		myMoney = money;
	}
	int SaleApples(int money) {
		int num = money / APPLE_PRICE;
		numOfApples -= num;
		myMoney += money;
		return num;
	}
	void ShowSalesResult() {
		cout << "���� ���: " << numOfApples << endl;
		cout << "�Ǹ� ����: " << myMoney << endl << endl;
	}
};

class FruitBuyer {
	int myMoney;
	int numOfApples;

public:
	void InitMembers(int money) {
		myMoney = money;
		numOfApples = 0;
	}
	bool HaveMoney(int money) const{
		if (money > 1000) {
			return true;
		}
		else {
			return false;
		}
	}
	void BuyApples(FruitSeller& seller, int money) {
		if (HaveMoney(money)) {
			numOfApples += seller.SaleApples(money);
			myMoney -= money;
			return;
		}
		cout << "�� ���ݾ� ��H����" << endl;
	}
	void ShowBuyResult() {
		cout << "���� �ܾ�: " << myMoney << endl;
		cout << "��� ����: " << numOfApples << endl << endl;
	}
};

int main(void) {
	FruitSeller seller;
	seller.InitMembers(1000, 20, 0);
	FruitBuyer buyer;
	buyer.InitMembers(5000);
	buyer.BuyApples(seller, 500);

	cout << "���� �Ǹ����� ��Ȳ" << endl;
	seller.ShowSalesResult();
	cout << "���� �������� ��Ȳ" << endl;
	buyer.ShowBuyResult();
	return 0;
}