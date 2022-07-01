#include <iostream>
using namespace std;

int main() {
	cout << "Bai 016: Tinh x9" << endl;
	int x;
	cout << "Nhap x = ";
	cin >> x;
	int x2 = x * x;
	double x4 = double(x2) * double(x2);
	double x8 = x4 * x4;
	double x9 = x8 * x;
	cout << "x9 = " << x9;
	return 1;
}