#include<iostream>
using namespace std;
#include<iomanip>
#include<ctime>


void Nhap(int[], int&);
void Xuat(int[], int);
int ChuSoDau(int);
int LietKe(int[], int);

int main()
{
	int n, dem;
	int a[100];
	Nhap(a, n);
	Xuat(a, n);
	cout << "so luong phan tu chan ke nhau la: ";
	dem = LietKe(a, n);
	cout << dem<< "\n";
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

int ChuSoDau(int n)
{
	int csd = n;
	for (; csd >= 10; )
		csd = csd / 10;
	return csd;
}

int LietKe(int a[], int n)
{
	int dem = 0;
	if (n <= 1)
		return 0;
	if (a[0] % 2 == 0 && a[1] % 2 == 0)
		dem++;
	for (int i = 0; i < n - 1; i++)
		if (a[i] % 2 == 0)
			if (a[i - 1] % 2 == 0 || a[i + 1] % 2 == 0)
				dem++;
	if (a[n - 1] && a[n - 2] % 2 == 0)
		dem++;
	return dem;
}

void Xuat(int a[], int n)
{
	cout << "Mang ban dau: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << setw(5);
	}
	cout << endl;
}