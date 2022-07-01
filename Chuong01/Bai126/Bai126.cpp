#include <iostream>
using namespace std;

#include <stdio.h>;

int main() {
	float a, b, max;
	cout << "Nhap a : ";
	cin >> a;
	max = a;
	cout << "Nhap b : ";
	cin >> b;
	if (a < b)
	{
		max = b;
	}
	printf("Gia tri lon nhat la %f", max);
	return 1;
}