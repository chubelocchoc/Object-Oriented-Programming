#include"Quadrilateral.h"	

int main()
{
	Quadrilateral a;
	cout << "Nhap toa do cua hinh tu giac:" << endl;
	cin >> a;
	Point p;
	p = a.GetPointA() + a.GetPointB();
	cout << p;
	return 1;
}