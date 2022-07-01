#include<iostream>
using namespace std;
#include<iomanip>
#include<ctime>


void Nhap(float[], int&);
void Xuat(float[], int);
float GiaTri(float[], int);
float DuongNhoNhat(float[], int);

int main()
{
	int n;
	float a[100];
	Nhap(a, n);
	Xuat(a, n);
	cout << "gia tri duong nho nhat: ";
	float duong = DuongNhoNhat(a, n);
	cout << duong << "\n";
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

float GiaTri(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
			return a[i];
	}
	return 0;
}

float DuongNhoNhat(float a[], int n)
{
	float lc = GiaTri(a, n);
	if (lc == -1)
		return -1;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0 && a[i] < lc)
			lc = a[i];
	}
	return lc;
}

void Xuat(float a[], int n)
{
	cout << "Mang ban dau: ";
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]:" << setprecision(6) << a[i] << setw(11);
	}
	cout << endl;
}