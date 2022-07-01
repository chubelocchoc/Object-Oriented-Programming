#include <iostream>
using namespace std;

#include <stdio.h>;

int main() {
	float a, b;
	cout << "Nhap a : ";
	cin >> a;
	cout << "Nhap b : ";
	cin >> b;
	if (a < 0)
	{
		a = -a;
	}
	if (b < 0)
	{
		b = -b;
	}
	printf("Tri tuyet doi la %f va %f", a, b);
	return 1;
}