#include<iostream>
using namespace std;
#include<iomanip>


void Nhap(int[], int&);
void Xuat(int[], int);

int main()
{
	int n;
	int a[100];
	Nhap(a, n);
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
		
		a[i] = rand()%(201) - 100;
	}

}

void Xuat(int a[], int n)
{
	cout << "Mang mot chieu: ";
	for (int i = 0; i < n; i++)
	{
		cout  << a[i] << setw(5);
	}
	cout << endl;
}