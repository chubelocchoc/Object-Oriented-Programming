#include<iostream>
using namespace std;
#include<iomanip>
#include<ctime>


void Nhap(float[], int&);
void Xuat(float[], int);
void SapXepTang(float[], int);
void HoanVi(float&, float&);

int main()
{
	int n;
	float a[100];
	Nhap(a, n);
	cout << "mang ban dau: ";
	Xuat(a, n);
	cout << "mang sau khi sap xep: ";
	SapXepTang(a, n);
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

void SapXepTang(float a[], int n)
{
	for (int i = 0; i < n-1; i++)
		for (int j = i+1; j < n; j++)
		{
			if (a[i] > a[j])
				HoanVi(a[i], a[j]);
		}
}

void HoanVi(float& x, float& y)
{
	float temp = x;
	x = y;
	y = temp;
}

void Xuat(float a[], int n)
{
	//cout << "Mang ban dau: ";
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]:" << setprecision(6) << a[i] << setw(11);
	}
	cout << endl;
}