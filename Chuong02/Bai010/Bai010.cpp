#include <iostream>
using namespace std;
struct toado
{
	int x;
	int y;
};
typedef struct toado TOADO;


void Nhap(TOADO [], int&);
float ChuVi(TOADO[], int);

int main()
{
	cout << " Bai 010" << endl;
	TOADO a[10];
	int n;
	Nhap(a, n);
	cout << "chu vi la: " << ChuVi(a, n) << endl;
	system("pause");
	return 0;
}

void Nhap(TOADO a[], int& n)
{
	n = 3;
	for (int i = 0; i < n; i++)
	{
		cout << " Nhap toa do diem A" << i << ": \n" << "x= ";
		cin >> a[i].x;
		cout << "y= ";
		cin >> a[i].y;

	}
}

float ChuVi(TOADO a[], int n)
{
	
	float dAB = sqrt(pow(a[1].x- a[0].x, 2) + pow(a[1].y - a[0].y, 2));
	float dAC = sqrt(pow(a[1].x - a[2].x, 2) + pow(a[1].y - a[2].y, 2));
	float dBC = sqrt(pow(a[2].x - a[0].x, 2) + pow(a[2].y - a[0].y, 2));
	float cv = dAB + dAC + dBC;
	return cv;
}