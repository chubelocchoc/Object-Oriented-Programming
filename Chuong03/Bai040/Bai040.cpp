#include<iostream>
using namespace std;
#include<iomanip>
#include<ctime>


void Nhap(float[], int&);
void Xuat(float[], int);
float GiaTriCucTieu(float[], int);
float Tong(float[], int);

int main()
{
	int n;
	float a[100], tong;
	Nhap(a, n);
	Xuat(a, n);
	cout << "Tong la: ";
	tong = Tong(a, n);
	cout << tong << endl;
	return 0;
}

void Nhap(float a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{

		a[i] = (rand() / (RAND_MAX / (100.0 - (-100.0)))) - 100.0;
	}

}

float GiaTriCucTieu(float a[], int n)
{
	if (n < 2)
		return 0;
	if (a[0] < a[1])
		cout << a[0];
	for (int i = 1; i < n - 1; i++)
	{
		if (a[i - 1]< a[i] && a[i + 1]>a[i])
			cout << a[i];
	}
	if (a[n - 1] > a[n])
		cout << a[n];
	return 1;
}

float Tong(float a[], int n)
{
	double S = 0;
	if (n == 1)
		S = a[0];
	if (a[0] < a[1])
		S = a[0];
	for (int i = 1; i < n - 1; i++)
	{
		if ((a[i - 1] > a[i]) && (a[i + 1] > a[i]))
			S =	S + a[i];
	}
	if (a[n - 2] > a[n - 1])
		S = S + a[n - 1];
	return S;
}

void Xuat(float a[], int n)
{
	cout << "Mang ban dau: ";
	for (int i = 0; i < n; i++)
	{
		cout << setprecision(6) << a[i] << setw(11);
	}
	cout << endl;
}