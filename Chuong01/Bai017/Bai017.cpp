#include <iostream>
using namespace std;

int main() {
	cout << "Bai 017: Tinh x11" << endl;
	int x;
	cout << "Nhap x = ";
	cin >> x;
	int x2 = x * x;
	double x4 = double(x2) * double(x2);
	double x8 = x4 * x4;
	double x11 = x8 * x2 * x;
	cout << "x11 = " << x11;
	return 1;
}