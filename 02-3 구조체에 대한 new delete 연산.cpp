#include <iostream>
using namespace std;

typedef struct __Point
{
	int xpos;
	int ypos;
} Point;

Point& PntAdder(const Point& p1, const Point& p2) {
	Point* result = new Point;
	//Point& result1 = *result;
	result->xpos = p1.xpos + p2.xpos;
	result->ypos = p1.ypos + p2.ypos;
	return *result; //위 주석을 안쓰려면 result 앞에 *가 있어야 함!
}

int main(void){
	Point* p1 = new Point;
	Point* p2 = new Point;
	//Point& p_1 = *p1;
	//Point& p_2 = *p2;

	scanf_s("%d %d", &(p1->xpos), &(p1->ypos));
	scanf_s("%d %d", &(p2->xpos), &(p2->ypos));
	/*cin >> &(p1->xpos) >> &(p1->ypos);
	cin >> &(p1->xpos) >> &(p2->ypos);*/		//무언가 오류가 떠서 보류

	cout<< PntAdder(*p1, *p2).xpos<<" "<<PntAdder(*p1,*p2).ypos<<endl;

	delete p1;
	delete p2;

	return 0;
}