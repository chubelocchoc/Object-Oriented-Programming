#include<iostream>
using namespace std;
#include<iomanip>


void Nhap(float[], int&, float&, float&);
void Xuat(float[], int);
bool ktToanLe(int);
void LietKe(float[], int, float, float);

int main()
{
	int n;
	float a[100], dau, cuoi;
	Nhap(a, n, dau, cuoi);
	Xuat(a, n);
	cout << "gia tri thuoc gioi han: ";
	LietKe(a, n, dau, cuoi);
	cout << endl;
	return 0;
}

void Nhap(float a[], int& n, float& dau, float& cuoi)
{
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap gioi han be: ";
	cin >> dau;
	cout << "Nhap gioi han lon: ";
	cin >> cuoi;

	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{

		a[i] = (rand() / (RAND_MAX / (100.0 - (-100.0)))) - 100.0;
	}

}

bool ktToanLe(int n)
{
	int flag = true;
	int t = abs(n);
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			flag = false;
		t = t / 10;
	}
	return flag;
}

void LietKe(float a[], int n, float dau, float cuoi)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] <= cuoi && a[i] >= dau)
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