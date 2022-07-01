// Bai139.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{
	cout << "Bai 139: Giai phuong trinh a*x + b = 0" << endl;
	cout << "Nhap a = ";
	float a;
	cin >> a;

	cout << "Nhap b = ";
	float b;
	cin >> b;

	if (a == 0)
	{
		if (b == 0)
		{
			cout << "Phuong trinh vo so nghiem.";
		}
		else
		{
			cout << "Phuong trinh vo nghiem.";
		}
	}
	else
	{
		float x = -(float)b / a;
		cout << "x = " << x;
	}

	cout << endl;
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
