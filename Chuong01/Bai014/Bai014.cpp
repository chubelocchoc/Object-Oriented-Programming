#include <iostream>
using namespace std;

int main() {
	cout << "Bai 014: Tinh x32" << endl;
	int x;
	cout << "Nhap x = ";
	cin >> x;
	int x2 = x * x;
	double x4 = double(x2) * double(x2);
	double x8 = x4 * x4;
	double x16 = x8 * x8;
	double x32 = x16 * x16;
	cout << "x32 = " << x32;
	return 1;
}