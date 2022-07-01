#include<iostream>
using namespace std;
#include<iomanip>
#include<ctime>


void Nhap(int[], int&);
void Xuat(int[], int);
float GiaTri(int[], int);
void LietKe(int[], int);

int main()
{
	int n;
	int a[100];
	Nhap(a, n);
	Xuat(a, n);
	cout << "gia tri chan cuoi cung: ";
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

float GiaTri(int a[], int n)
{
	int lc = -1;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
			lc = a[i];
	}
	return lc;
}

void LietKe(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == GiaTri(a, n))
			cout << a[i] << setw(5);
	}
}

void Xuat(int a[], int n)
{
	cout << "Mang mot chieu: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << setw(5);
	}
	cout << endl;
}