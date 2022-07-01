#include <iostream>
using namespace std;

#include <stdio.h>;

int main() {
	float a, b, temp;
	cout << "Nhap a : ";
	cin >> a;
	cout << "Nhap b : ";
	cin >> b;
	if (a > b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	printf("Gia tri tang dan %f; %f", a, b);
	return 1;
}