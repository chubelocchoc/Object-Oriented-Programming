#include<iostream>
using namespace std;
#include<iomanip>
#include<ctime>


void Nhap(float[], int&);
void Xuat(float[], int);
int Dem(float[], int);
float Tong(float[], int);

int main()
{
	int n;
	float a[100], tb;
	Nhap(a, n);
	Xuat(a, n);
	cout << "trung binh cac so duong: ";
	tb = Tong(a, n);
	cout << tb << endl;
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

int Dem(float a[], int n)
{
	int dem = 0;;
	for (int i = 0; i < n; i++)
		if (a[i] > 0)
			dem++;
	return dem;
}

float Tong(float a[], int n)
{
	int dem = Dem(a, n);
	float tb = 0, S = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
			S = S + a[i];
	}
	tb = S / dem;
	return tb;
}

void Xuat(float a[], int n)
{
	cout << "Mang ban dau: ";
	for (int i = 0; i < n; i++)
	{
		cout << setprecision(6) << a[i] << setw(11);
	}
	cout << endl;
}