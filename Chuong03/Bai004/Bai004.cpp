#include<iostream>
using namespace std;
#include<iomanip>
#include <fstream>
#include<string>


void Nhap(string, double[], int&);
void Xuat(double[], int);

int main()
{
	string filename = "bai004.txt";
	int n;
	double a[100];
	Nhap(filename, a, n);
	cout << "mang la: ";
	Xuat(a, n);
	return 0;
}

void Nhap(string filename, double a[], int& n)
{
	ifstream dong(filename);
	dong >> n;
	for (int i = 0; i < n; i++)
	{
		dong >> a[i];
	}


}

void Xuat(double a[], int n)
{
	//cout << n << endl;
	for (int i = 0; i < n; i++)
	{
		cout << setprecision(20) << a[i] << setw(11);
	}
	cout << endl;
}