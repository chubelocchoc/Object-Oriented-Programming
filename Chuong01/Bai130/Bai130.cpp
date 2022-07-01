#include <iostream>
using namespace std;

#include <stdio.h>;

int main() {
	float a, b, c, temp;
	cout << "Nhap a : ";
	cin >> a;
	cout << "Nhap b : ";
	cin >> b;
	cout << "Nhap c : ";
	cin >> c;
	if ((a < (b + c)) && (b < (a + c)) && (c < (a + b)))
	{
		printf("Ton tai tam giac co 3 canh %f; %f; %f", a, b, c);
	}
	else
	{
		printf(" Khong ton tai tam giac co 3 canh %f; %f; %f", a, b, c);
	}
	return 1;
}