#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cout << "Bai 013: Tinh x7" << endl;
	int x;
	cout << "Nhap x = ";
	cin >> x;
	int x2 = x * x;
	int x4 = x2 * x2;
	int x8 = x4 * x4;
	int x7 = x8 / x;
	cout << "x7 = " << x7;
	return 1;
}