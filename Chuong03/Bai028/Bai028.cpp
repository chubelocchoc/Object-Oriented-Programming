#include<iostream>
using namespace std;
#include<iomanip>
#include<ctime>


void Nhap(float[], int&);
void Xuat(float[], int);
float GiaTriDuongNho(float[], int);
float DuongDau(float[], int);
void LietKe(float[], int);

int main()
{
	int n;
	float a[100];
	Nhap(a, n);
	Xuat(a, n);
	cout << "vi tri do la: ";
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

float DuongDau(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
			return a[i];
	}
}


float GiaTriDuongNho(float a[], int n)
{
	float DuongNho = DuongDau(a,n);
	int vitri = 0;
	
	for (int i = 1; i < n; i++)
		if (a[i] > 0 && a[i] < DuongNho)
		{
			DuongNho = a[i];
			vitri = i;
		}
	return DuongNho;
}

void LietKe(float a[], int n)
{
	float ad = GiaTriDuongNho(a, n);
	for (int i = 0; i < n; i++)
	{
		if (a[i] == ad)
			cout << i << setw(11);
	}
}

void Xuat(float a[], int n)
{
	cout << "Mang ban dau: ";
	for (int i = 0; i < n; i++)
	{
		cout << setprecision(3) << a[i] << setw(11);
	}
	cout << endl;
}