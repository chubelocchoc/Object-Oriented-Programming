#include<iostream>
using namespace std;
#include<iomanip>


void Nhap(double[], int&);
void Xuat(double[], int);

int main()
{
	int n;
	double a[100];
	Nhap(a, n);
	Xuat(a, n);
	return 0;
}

void Nhap(double a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{

		a[i] =(rand()/(RAND_MAX/(100.0-(-100.0)))) -100.0;
	}

}

void Xuat(double a[], int n)
{
	cout << "Mang mot chieu: ";
	for (int i = 0; i < n; i++)
	{
		cout << setprecision(6) << a[i] << setw(11);
	}
	cout << endl;
}