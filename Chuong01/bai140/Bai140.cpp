// Bai140.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{
	cout << "Bai 140: Giai phuong trinh a*x*x + b*x + c = 0" << endl;
	cout << "Nhap a = ";
	float a;
	cin >> a;

	cout << "Nhap b = ";
	float b;
	cin >> b;

	cout << "Nhap c = ";
	float c;
	cin >> c;

	float d = b * b - 4 * a * c;
	if (d != 0)
	{
		if (d > 0)
		{
			float x1 = (-b - sqrt(d)) / (2 * a);
			float x2 = (-b + sqrt(d)) / (2 * a);
			cout << "Phuong trinh co 2 nghiem:" << endl;
			cout << "x1 = " << x1 << endl;
			cout << "x2 = " << x2 << endl;
		}
		else
		{
			cout << "Phuong trinh vo nghiem." << endl;
		}
	}
	else
	{
		float x = -float(b) / (2 * a);
		cout << "Phuong trinh co nghiem kep: " << "x1 = x2 = " << x << endl;
	}

	system("pause");
	return 1;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
