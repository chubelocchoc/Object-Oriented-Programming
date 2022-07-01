#include<iostream>
using namespace std;
#include<iomanip>


void Nhap(int[], int&);
void Xuat(int[], int);
int ChuSoDau(int);
void LietKe(int[], int);

int main()
{
	int n;
	int a[100];
	Nhap(a, n);
	Xuat(a, n);
	cout << "cac gia tri co so le dau tien la: ";
	LietKe(a, n);
	cout << endl;
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

void LietKe(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (ChuSoDau(a[i])%2 !=0)
			cout << a[i] << setw(5);
	}
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