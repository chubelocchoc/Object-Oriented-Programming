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
	int n;
	int a[100], dem;
	Nhap(a, n);
	Xuat(a, n);
	cout << "so luong gia tri chan: ";
	dem = LietKe(a, n);
	cout << dem << "\n";
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
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
			dem++;
	}
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