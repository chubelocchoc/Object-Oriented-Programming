#include <iostream>
using namespace std;
#define PI 3.1416
#include<math.h>
#include<iomanip>

void Nhap(int&);
double dientich(int);


int main()
{
	cout << "Bai 005" << endl;
	cout << "Nhap r: \n";
	int r;
	Nhap(r);
	double dt = dientich(r);
	cout << "\nDien tich xung quanh: " << setw(6) << dt << endl;

	return 1;
}

void Nhap(int& r)
{

	cin >> r;

}

double dientich(int r)
{
	double tt = 0;
	tt = 4.0/3 *(PI * pow( r , 3));


	return tt;
}