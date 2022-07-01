#include<iostream>
using namespace std;
#include<iomanip>
#include<ctime>


void Nhap(float[], int&);
void Xuat(float[], int);
float GiaTriNhoHon(float[], int);
void LietKe(float[], int);

int main()
{
	int n;
	float a[100];
	Nhap(a, n);
	Xuat(a, n);
	cout << "cac gia tri lon hon: ";
	LietKe(a, n);
	cout << endl;
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

float GiaTriNhoHon(float a[], int n)
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

void LietKe(float a[], int n)
{
	if (n == 1)
		return;
	for (int i = 1; i < n - 1; i++)
	{
		if (abs(a[i + 1]) < a[i])
			cout << setprecision(6) << a[i] << setw(11);
	}
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