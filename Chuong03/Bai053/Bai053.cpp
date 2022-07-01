#include<iostream>
using namespace std;
#include<iomanip>
#include<ctime>
#define Epsilon 1.1e-5;  // dinh nghia khoang cach 2 so cho phep bang nhau.

void Nhap(float[], int&);
void Xuat(float[], int);
int Dem(float[], int, float);

int main()
{
	int n, tb;
	float a[300], x;
	cout << "Nhap gia tri x (from -99 to 99): ";
	cin >> x ;
	Nhap(a, n);
	Xuat(a, n);
	cout << "so lan lap lai x: ";
	tb = Dem(a, n, x);
	cout << tb << endl;
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n(max=300): ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{

		a[i] = (rand() / (RAND_MAX / (100.0 - (-100.0)))) - 100.0;
	}

}

int Dem(float a[], int n, float x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (abs(a[i]-x) <= (1.1)) //dang cho epsilon = 1.1
			dem++;
	return dem;
}

void Xuat(float a[], int n)
{
	cout << "Mang ban dau: ";
	for (int i = 0; i < n; i++)
	{
		cout << setprecision(6) << a[i] << setw(11);
	}
	cout <<  "\n" ;
}