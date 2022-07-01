#include <iostream>
using namespace std;
#define PI 3.1416
#include <math.h>;

void Nhap(int&, int&);
float dientich(int, int);


int main()
{
	cout << "Bai 009" << endl;
	int r, n;
	Nhap(r, n);
	float dt = dientich(r, n);
	cout << "\ndien tich cua da giac deu: " << dt << endl;

	return 1;
}

void Nhap(int& r, int& n)
{

	cout << "Nhap so canh: ";
	cin >> n;

	cout << "Nhap ban kinh duong tron: ";
	cin >> r;

}

float dientich(int r, int n)
{
	float dt = 1.0 / 2 * n * r * r * sin(2 * PI / n);


	return dt;
}