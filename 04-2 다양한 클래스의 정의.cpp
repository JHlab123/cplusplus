#include <iostream>
using namespace std;

class Point {
private:
	int xpos, ypos;
public:
	void Init(int x, int y) {
		xpos = x;
		ypos = y;
	}
	void ShowPointInfo() const {
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}
};

class Circle {
private:
	Point a;
	int r;
public:
	void Init(int x, int y, int r_1) {
		a.Init(x, y);
		r = r_1;
	}
	void ShowCircleInfo() const {
		cout << "radius: " <<r<< endl;
		a.ShowPointInfo();
	}
};

class Ring {
private:
	Circle a;
	Circle b;
public:
	void Init(int x, int y, int z, int x1, int y1, int z1) {
		a.Init(x, y, z);
		b.Init(x1, y1, z1);
	}
	void ShowRingInfo() const {
		cout << "Inner Circle Info..." << endl;
		a.ShowCircleInfo();
		cout << "Outter Circle Info..." << endl;
		b.ShowCircleInfo();
	}
};
int main(void) {
	Ring ring;
	ring.Init(1, 1, 4, 2, 2, 9);
	ring.ShowRingInfo();
	return 0;
}