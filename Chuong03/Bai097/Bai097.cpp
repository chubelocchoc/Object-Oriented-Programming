#include<iostream>
using namespace std;
#include<iomanip>
#include<ctime>


void Nhap(int[], int&);
void Xuat(int[], int);
int GiaTri(int[], int);
int KTHoanThien(int);

int main()
{
	int n;
	int a[100];
	Nhap(a, n);
	Xuat(a, n);
	cout << "vi tri hoan thien cuoi cung: ";
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

int GiaTri(int a[], int n)
{
	int lc = -1;
	for (int i = n-1; i >= 0 ; i--)
	{
		if (KTHoanThien(a[i]))
			return i;
	}
	return lc;
}

int KTHoanThien(int n)
{
	int S = 0;
	int t = 1;
	while (t < n)
	{
		if (n % t == 0)
		{
			S = S + t;

		}
		t = t + 1;
	}
	if (S == n)
		return 1;
	return 0;
}

void Xuat(int a[], int n)
{
	cout << "Mang mot chieu: ";
	for (int i = 0; i < n; i++)
	{
		cout << "a[" <<i<<"]:"<< a[i] << setw(5);
	}
	cout << endl;
}