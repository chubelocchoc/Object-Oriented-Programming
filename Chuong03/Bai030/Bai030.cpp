#include<iostream>
using namespace std;
#include<iomanip>
#include<ctime>


void Nhap(float[], int&);
void Xuat(float[], int);
float GiaTriAmDau(float[], int);
void LietKe(float[], int);

int main()
{
	int n;
	float a[100];
	Nhap(a, n);
	Xuat(a, n);
	cout << "cac cap so la: ";
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

float GiaTriAmDau(float a[], int n)
{
	for (int i = 0; i < n; i++)
		if (a[i] < 0)
			return a[i];
	return n;
}

void LietKe(float a[], int n)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			if(j!=i)
				cout << "(" << a[i] <<"," << a[j]<<")" << setw(5);
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