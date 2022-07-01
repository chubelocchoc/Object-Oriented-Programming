#include <iostream>
using namespace std;

int main()
{
	cout << "Bai 018: Tinh x12" << endl;
	int x;
	cout << "Nhap x = ";
	cin >> x;
	int x2 = x * x;
	double x4 = double(x2) * double(x2);
	double x8 = x4 * x4;
	double x12 = x8 * x4;
	cout << "x12 = " << x12;
	return 1;
}