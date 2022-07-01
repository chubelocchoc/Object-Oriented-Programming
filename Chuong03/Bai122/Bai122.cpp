#include<iostream>
using namespace std;
#include<iomanip>
#include<ctime>


void Nhap(int[], int&);
void Xuat(int[], int);
int GiaTri(int[], int);
int TanSo(int[], int, int);

int main()
{
	int n;
	int a[100];
	Nhap(a, n);
	Xuat(a, n);
	cout << "tra ve gia tri khi mang toan chan: ";
	int duong = GiaTri(a, n);
	cout << duong << "\n";
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

int GiaTri (int a[], int n)
{
	for (int i = 1; i < n; i++)
	{
		if (a[i]%2!=0)
			return 0;
	}
	return 1;
}

int TanSo(int a[], int n, int x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
			dem++;
	}

	return dem;
}

void Xuat(int a[], int n)
{
	cout << "Mang mot chieu: ";
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]:" << a[i] << setw(5);
	}
	cout << endl;
}