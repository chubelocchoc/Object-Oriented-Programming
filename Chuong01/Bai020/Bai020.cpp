#include <iostream>
using namespace std;

int main() 
{
	cout << "Bai 020: Tinh x14" << endl;
	int x;
	cout << "Nhap x = ";
	cin >> x;
	int x2 = x * x;
	double x4 = double(x2) * double(x2);
	double x8 = x4 * x4;
	double x14 = x8 * x4 * x2;
	cout << "x14 = " << x14;
	return 1;
}