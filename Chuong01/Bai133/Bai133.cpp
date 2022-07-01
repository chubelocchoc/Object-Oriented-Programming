// Bai133.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{
	cout << "Bai 133: Tam giac co 3 canh dai x,y,z. Tam gaic do la tam gaic gi" << endl;
	cout << "Nhap x, y, z" << endl;
	float x, y, z;

	cout << "x = ";
	cin >> x;

	cout << "y = ";
	cin >> y;

	cout << "z = ";
	cin >> z;
	if ((x < y + z && y < z + x && z < x + y) || (abs(x - y) < z && z < x - y))
	{
		if (x == y && y == z)
		{
			cout << "Day la tam giac deu" << endl;
		}
		else if (x * x == y * y + z * z || y * y == x * x + z * z || z * z == x * x + y * y)
		{
			if (x == y || y == z || z == x)
			{
				cout << "Day la tam giac vuong can" << endl;
			}
			else
			{
				cout << "Day la tam giac vuong" << endl;
			}
		}
		else
		{
			if (x == y || y == z || z == x)
			{
				cout << "Day la tam giac can" << endl;
			}
			else
			{
				cout << "Day la tam giac thuong" << endl;
			}
		}
	}
	else
	{
		cout << "Day khong phai tam giac" << endl;
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
