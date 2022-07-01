#include<iostream>
using namespace std;
#include<iomanip>


struct PhanSo
{
	int tu;
	int mau;
};
typedef struct PhanSo phanso;

void Nhap(phanso&);
void ktDuong(phanso);
double Tong(phanso, phanso);

int main()
{
	cout << "Nhap phanso 1:\n";
	phanso A;
	Nhap(A);
	cout << "Nhap phanso 2:\n";
	phanso B;
	Nhap(B);
	cout << "phanso 2 la: ";
	ktDuong(B);
	cout << "\ntong phanso 1 va phanso 2 la:";
	double tong;
	tong = Tong(A, B);
	cout << setprecision(6) << tong << "\n";
	return 0;
}

void Nhap(phanso& A)
{
	cout << "tu: ";
	cin >> A.tu;
	cout << "mau: ";
	cin >> A.mau;

}

void ktDuong(phanso A)
{
	if ((float)A.tu / A.mau >= 0)
		cout << "phanso Duong.\n";
	else
		cout << "phanso Am.\n";
}

double Tong(phanso A, phanso B)
{
	double tong;
	tong = ((float)A.tu / A.mau + (float)A.tu / A.mau);
	return tong;

}