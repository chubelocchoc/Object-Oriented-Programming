#include<iostream>
using namespace std;
#include<iomanip>
#include<ctime>

void Nhap(float[], int&);
void Xuat(float[], int);
float Dem(float[], int, float);

int main()
{
	int n;
	float a[100], x, tb;
	cout << "Nhap gia tri x: ";
	cin >> x;
	Nhap(a, n);
	Xuat(a, n);
	cout << "gia tri xa x nhat: ";
	tb = Dem(a, n, x);
	cout << setprecision(6) << tb << "\n";
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{

		a[i] = (rand() / (RAND_MAX / (100.0 - (-100.0)))) - 100.0;
	}

}

float Dem(float a[], int n, float x)
{
	float lc = a[0];
	for (int i = 1; i < n; i++)
		if (abs(a[i] - x) > abs(lc -x))
			lc = a[i];
	return lc;
}

void Xuat(float a[], int n)
{
	cout << "Mang ban dau: ";
	for (int i = 0; i < n; i++)
	{
		cout << setprecision(6) << a[i] << setw(11);
	}
	cout << "\n";
}