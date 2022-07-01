// Bai138.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{
	cout << "Bai 138:" << endl;
	cout << "Nhap x = ";
	float x;
	cin >> x;

	float fx = 0;
	if (x >= 0)
	{
		if (x <= 1)
		{
			fx = 5 * x - 7;
		}
		else
		{
			fx = 2 * x * x * x + 5 * x * x - 8 * x + 3;
		}
	}
	else
	{
		fx = -2 * x * x * x + 6 * x + 9;
	}

	cout << "f(" << x << ") = " << fx << endl;
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
