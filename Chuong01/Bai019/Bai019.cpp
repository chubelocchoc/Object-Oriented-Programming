#include <iostream>
using namespace std;

int main() {
	cout << "Bai 019: Tinh x13" << endl;
	int x;
	cout << "Nhap x = ";
	cin >> x;
	int x2 = x * x;
	double x4 = double(x2) * double(x2);
	double x8 = x4 * x4;
	double x13 = x8 * x4 * x;
	cout << "x13 = " << x13;
	return 1;
}