#include <iostream>
using namespace std;

#include <stdio.h>;

int main() {
	float a, b, min;
	cout << "Nhap a : ";
	cin >> a;
	min = a;
	cout << "Nhap b : ";
	cin >> b;
	if (a > b)
	{
		min = b;
	}
	printf("Gia tri nho nhat la %f", min);
	return 1;
}