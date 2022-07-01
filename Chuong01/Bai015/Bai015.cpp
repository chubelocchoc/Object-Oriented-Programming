#include <iostream>
using namespace std;

int main() {
	cout << "Bai 015: Tinh x64" << endl;
	int x;
	cout << "Nhap x = ";
	cin >> x;
	int x2 = x * x;
	double x4 = double(x2) * double(x2);
	double x8 = x4 * x4;
	double x16 = x8 * x8;
	double x32 = x16 * x16;
	double x64 = double(x32) * double(x32);
	cout << "x64 = " << x64;
	return 1;
}