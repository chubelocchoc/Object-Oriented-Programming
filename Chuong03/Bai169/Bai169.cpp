#include<iostream>
using namespace std;
#include<iomanip>
#include<ctime>


void Nhap(float[], int&);
void Xuat(float[], int);
float GiaTriLonNhat(float[], int);
float GiaTriNhoNhat(float[], int);
void ThemViTri(float[], int&, float, int);

int main()
{
	int n, k;
	float x;
	cout << "Nhap vi tri muon them:";
	cin >> k;
	cout << "Nhap gia tri muon them:";
	cin >> x;
	float a[100];
	Nhap(a, n);
	cout << "mang ban dau: ";
	Xuat(a, n);
	cout << "mang sau khi xoa: ";
	ThemViTri(a, n, x, k);
	Xuat(a, n);
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

float GiaTriLonNhat(float a[], int n)
{
	float lc = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] >= lc)
			lc = a[i];
	}
	return lc;
}

float GiaTriNhoNhat(float a[], int n)
{
	float lc = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] <= lc)
			lc = a[i];
	}
	return lc;
}

void ThemViTri(float a[], int& n, float x, int k)
{
	for (int i = n; i >= k+1; i--)
	{
		a[i] = a[i - 1];
	}
	a[k] = x;
	n++;
}

void Xuat(float a[], int n)
{
	//cout << "Mang ban dau: ";
	for (int i = 0; i < n; i++)
	{
		cout << setprecision(6) << a[i] << setw(11);
	}
	cout << "\n";
}