#include <iostream>
using namespace std;

int main()
{
	cout << " Bai 011" << endl;
	cout << "Bai 011: Tinh chu vi tam giac ABC co toa do A(x1,y1), B(x2,y2) va C(x3,y3)" << endl;
	cout << "Nhap x1, y1, x2, y2, x3, y3" << endl;
	float x1, y1, x2, y2, x3, y3;

	cout << "x1 = ";
	cin >> x1;

	cout << "y1 = ";
	cin >> y1;

	cout << "x2 = ";
	cin >> x2;

	cout << "y2 = ";
	cin >> y2;

	cout << "x3 = ";
	cin >> x3;

	cout << "y3 = ";
	cin >> y3;

	float a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	float b = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	float c = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));

	float p = (a + b + c) / 2;
	float dt = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << "Dien tich tam giac ABC = " << dt << endl;

	system("pause");
	return 1;
}