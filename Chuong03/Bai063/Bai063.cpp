#include<iostream>
using namespace std;
#include<iomanip>
#include<ctime>


void Nhap(int[], int&);
void Xuat(int[], int);
int TanSo(int[], int, int);
void LietKe(int[], int);

int main()
{
	int n;
	int a[100];
	Nhap(a, n);
	Xuat(a, n);
	cout << "cac gia tri xuat hien 1 lan trong mang la: ";
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

void Xuat(int a[], int n)
{
	cout << "Mang ban dau: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << setw(5);
	}
	cout << endl;
}

int TanSo(int a[], int n, int b)
{
	int ts = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == b)
			ts++;
	}

	return ts;
}

void LietKe(int a[], int n)
{
	int tong = 0;
	for (int i = 0; i < n; i++)
	{
		int ts = TanSo(a, n, a[i]);
		if (ts == 1)
		{
			cout << setw(5) << a[i] ;
			tong++;
		}
			
	}
	cout << "\nTong cong: " << tong << "\n";
		
}