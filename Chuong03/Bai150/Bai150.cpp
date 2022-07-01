#include<iostream>
using namespace std;
#include<iomanip>
#include<ctime>


void Nhap(int[], int&);
void Xuat(int[], int);
void MotVeDau(int[], int);
int DemSoLe(int[], int);

int main()
{
	int n;
	int a[400];
	Nhap(a, n);
	//int m = DemSoLe(a, n);
	cout << "Mang ban dau: ";
	Xuat(a, n);
	cout << "Mang sau khi xep: ";
	MotVeDau(a, n);
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

void MotVeDau(int b[], int m)
{
	int vt = 0;
	for (int i = 0; i < m; i++)
		if (b[i] == 1)
		{
			int temp = b[i];
			b[i] = b[vt];
			b[vt] = temp;
			vt++;
		}
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