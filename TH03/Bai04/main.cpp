#include "Circle.h"

int main()
{
	Circle c;
	c.Nhap();
	c.Xuat();
	float area;
	area = c.Area();
	cout << "Dien tich = " << area << endl;
	return 0;
}