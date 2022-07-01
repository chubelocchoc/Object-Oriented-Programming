#include <iostream>
using namespace std;
#define PI 3.1416
#include <math.h>;

void Nhap(int&, int&);
float chuvi(int, int);


int main()
{
	cout << "Bai 008" << endl;
	int r, n;
	Nhap(r,n);
	float dt = chuvi(r,n);
	cout << "\nChu vi cua da giac deu: " << dt << endl;

	return 1;
}

void Nhap(int& r, int& n)
{

	cout << "Nhap so canh: ";
	cin >> n;

	cout << "Nhap ban kinh duong tron: ";
	cin >> r;

}

float chuvi(int r, int n)
{
	float cv = 2 * n * r * sin(PI / n);


	return cv;
}