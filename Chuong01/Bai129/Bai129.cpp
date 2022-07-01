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
	if (a > b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	if (a > c)
	{
		temp = a;
		a = c;
		c = temp;
	}
	if (b > c)
	{
		temp = b;
		b = c;
		c = temp;
	}
	printf("Gia tri tang dan %f; %f; %f", a, b, c);
	return 1;
}