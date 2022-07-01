#include<iostream>
using namespace std;
#include<ctime>
#include<iomanip>

void Nhap(int*, int);
void Xuat(int*, int);

int main()
{
	srand(time(NULL));
	int n = rand() % 101;
	int *a = new int [n];
	Nhap(a, n);
	Xuat(a, n);
	delete[]a;
	a = nullptr;
	return 0;
}

void Nhap(int *p, int n)
{
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		p[i] = rand() % 201 - 100;
	}
}

void Xuat(int *p, int n)
{
	cout << "chieu dai mang:" << n << "\n";
	cout << "Mang ban dau la:";
	for (int i = 0; i < n; i++)
	{
		cout << p[i] << "\t";

	}
	cout << "\n";
}