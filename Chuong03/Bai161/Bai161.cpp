#include<iostream>
using namespace std;
#include<iomanip>
#include<ctime>


void Nhap(float[], int&);
void Xuat(float[], int);
void XoaAm(float[], int&);
void XoaViTri(float[], int&, int);

int main()
{
	int n;
	float a[100];
	Nhap(a, n);
	cout << "mang ban dau: ";
	Xuat(a, n);
	cout << "mang sau khi xoa: ";
	XoaAm(a, n);
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

void XoaAm(float a[], int &n)
{
	for (int i = n-1; i >=0; i--)
	{
		if (a[i] < 0)
			XoaViTri(a,n,i);
	}
}


void XoaViTri(float a[], int& n, int k)
{
	for (int i = k; i < n - 1; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
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