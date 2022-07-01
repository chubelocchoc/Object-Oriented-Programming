#include<iostream>
using namespace std;
#include<iomanip>
#include <fstream>
#include<string>


void Nhap(string, int [], int &);
void Xuat(int [], int);

int main()
{
	string filename = "bai003.txt";
	int n;
	int a[100];
	Nhap(filename, a, n);
	cout << "mang la: ";
	Xuat(a, n);
	return 0;
}

void Nhap(string filename, int a[], int & n)
{
	ifstream dong (filename);
	dong >> n;
	for (int i = 0; i < n; i++)
	{
		dong >> a[i];
	}


}

void Xuat(int a[], int n)
{
	//cout << n << endl;
	for (int i = 0; i < n; i++)
	{
		cout << setprecision(1) << a[i] << setw(11);
	}
	cout << endl;
}