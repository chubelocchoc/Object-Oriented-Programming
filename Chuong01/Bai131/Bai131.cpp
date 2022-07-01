// Bai131.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{
	cout << "Bai 131: Kiem tra ba dinh A(xa,ya), B(xb,yb) va C(xc,yc) co phai ba dinh cua mot tam giac hay khong" << endl;
	cout << "Nhap xa, ya, xb, yb, xc, yc" << endl;
	float xa, ya, xb, yb, xc, yc;

	cout << "xa = ";
	cin >> xa;

	cout << "ya = ";
	cin >> ya;

	cout << "xb = ";
	cin >> xb;

	cout << "yb = ";
	cin >> yb;

	cout << "xc = ";
	cin >> xc;

	cout << "yc = ";
	cin >> yc;

	float ab = sqrt((xb - xa) * (xb - xa) + (yb - ya) * (yb - ya));
	float bc = sqrt((xc - xb) * (xc - xb) + (yc - yb) * (yc - yb));
	float ca = sqrt((xc - xa) * (xc - xa) + (yc - ya) * (yc - ya));
	if ((ab < bc + ca && bc < ca + ab && ca < ab + bc) || (abs(bc - ca) < ab && ab < bc + ca))
		cout << "Day la 3 dinh cua mot tam giac" << endl;
	else
		cout << "Day khong phai 3 dinh cua mot tam giac" << endl;
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
