#include<iostream>
using namespace std;
#include<iomanip>
#include<ctime>


void Nhap(int[], int&);
void Xuat(int[], int);
void SapXepTang(int[], int);
void HoanVi(int&, int&);
bool KtNguyento(int&);

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

bool KtNguyento(int& i)
{
	int S = 0;
	int t = 1;
	while (t <= i)
	{
		if (i % t == 0)
		{
			S = S++;

		}
		t = t + 1;

	}
	if (S == 2)
		return true;
	return false;
}


void SapXepTang(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
		{
			if (KtNguyento(a[i]) && KtNguyento(a[j]) && a[i]>a[j])
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