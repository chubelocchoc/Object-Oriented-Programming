#include<iostream>
using namespace std;
#include<iomanip>
#include<ctime>


void Nhap(int[], int&);
void Xuat(int[], int);
void LeTang(int[], int);
void ChanTang(int[], int);
void HoanVi(int&, int&);
void SapXepTang(int[], int);

int main()
{
	int n;
	int a[100];
	Nhap(a, n);
	cout << "mang ban dau: ";
	Xuat(a, n);
	cout << "mang sau khi sap xep: ";
	SapXepTang(a, n);
	Xuat(a, n);
	return 0;
}

void Nhap(int a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{

		a[i] = rand() % (201) - 100;
	}

}

void SapXepTang(int a[], int n)
{
	ChanTang(a, n);
	LeTang(a, n);

}

void LeTang(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] % 2 != 0 && a[j] % 2 != 0 && a[i] > a[j])
				HoanVi(a[i], a[j]);
		}
}

void ChanTang(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] % 2 == 0 && a[j] % 2 == 0 && a[i] > a[j])
				HoanVi(a[i], a[j]);
		}
}

void HoanVi(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}

void Xuat(int a[], int n)
{
	//cout << "Mang mot chieu: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << setw(5);
	}
	cout << endl;
}