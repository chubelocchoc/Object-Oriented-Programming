// Bai134.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{
	cout << "Bai 133: Kiem tra x<=y<=z dung hay khong" << endl;
	cout << "Nhap x, y, z" << endl;
	float x, y, z;

	cout << "x = ";
	cin >> x;

	cout << "y = ";
	cin >> y;

	cout << "z = ";
	cin >> z;

	if (x <= y && y <= z)
	{
		cout << "Bat dang thuc dung." << endl;
	}
	else
	{
		cout << "Bat dang thuc sai." << endl;
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
