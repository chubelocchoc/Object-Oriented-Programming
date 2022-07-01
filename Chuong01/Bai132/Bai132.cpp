// Bai132.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{
	cout << "Bai 132: Kiem tra M(xm,ym) co thuoc tam giac ABC co ba dinh A(xa,ya), B(xb,yb) va C(xc,yc) hay khong" << endl;
	cout << "Nhap xa, ya, xb, yb, xc, yc, xm, ym" << endl;
	float xa, ya, xb, yb, xc, yc, xm, ym;

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

	cout << "xm = ";
	cin >> xm;

	cout << "ym = ";
	cin >> ym;

	float Sabc = float(1) / 2 * abs(xa * yb + xb * yc + xc * ya - xb * ya - xc * yb - xa * yc);
	float Smab = float(1) / 2 * abs(xm * ya + xa * yb + xb * ym - xa * ym - xb * ya - xm * yb);
	float Smbc = float(1) / 2 * abs(xm * yb + xb * yc + xc * ym - xb * ym - xc * yb - xm * yc);
	float Smca = float(1) / 2 * abs(xm * yc + xc * ya + xa * ym - xc * ym - xa * yc - xm * ya);

	if (Sabc == Smab + Smbc + Smca)
		cout << "M nam trong tam giac ABC" << endl;
	else
		cout << "M nam ngoai tam giac ABC" << endl;
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
