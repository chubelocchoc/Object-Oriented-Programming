#include<iostream>
using namespace std;
#include<iomanip>


void Nhap(float[], int&);
void Xuat(float[], int);
bool ktToanLe(int);
void LietKe(float[], int);

int main()
{
	int n;
	float a[100];
	Nhap(a, n);
	Xuat(a, n);
	cout << "vi tri co gia tri am: ";
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

void LietKe(float a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i]<0)
			cout << "a["<<  i << "]" << setw(5);
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