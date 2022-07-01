#include<iostream>
using namespace std;
#include<iomanip>
#include<ctime>


void Nhap(int[], int&);
void Xuat(int[], int);
void Mangb(int[], int, int[]);
int DemSoLe(int[], int);

int main()
{
	int n;
	int a[200], b[200];
	Nhap(a, n);
	//int m = DemSoLe(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);
	Mangb(b, n, a);
	cout << "Mang toan le: ";
	Xuat(b, n);
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

void Mangb(int b[], int m, int a[])
{
	if (m == 1)
		b[0] = a[0];
	b[0] = a[1];
	for (int i = 1; i < m-1; i++)
	{
		b[i] = a[i-1] + a[i+1];
	}
	b[m - 1] = a[m - 2];

}

int DemSoLe(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
			dem++;
	}

	return dem;
}

void Xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]:" << a[i] << setw(5);
	}
	cout << endl;
}