#include<iostream>
using namespace std;
#include<iomanip>
#include<ctime>


void Nhap(float[], int&);
void Xuat(float[], int);
float GiaTriLonNhat(float[], int);
int LietKe(float[], int);

int main()
{
	int n, dem;
	float a[100];
	Nhap(a, n);
	Xuat(a, n);
	cout << "so luong gia tri lon nhat: ";
	dem = LietKe(a, n);
	cout << dem << "\n";
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

float GiaTriLonNhat(float a[], int n)
{
	float lc = a[0];
	for (int i = 1; i < n; i++)
	{
		if (a[i] >= lc)
			lc = a[i];
	}
	return lc;
}

int LietKe(float a[], int n)
{
	int dem = 0;
	float gtln = GiaTriLonNhat(a, n);
	for (int i = 0; i < n; i++)
	{
		if (abs(a[i]-gtln) <= 1.1e-5)
			dem ++;
	}
	return dem;
}

void Xuat(float a[], int n)
{
	cout << "Mang ban dau: ";
	for (int i = 0; i < n; i++)
	{
		cout << setprecision(6) << a[i] << setw(11);
	}
	cout << "\n";
}