#include"PhanSo.h"
int main()
{
	PhanSo a, b, tong, hieu, tich, thuong;
	cout << "Nhap 2 phanso: \n";
	a.Nhap();
	//a.Xuat();
	b.Nhap();
	//b.Xuat();
	tong = a.Cong(b);
	cout << "Tong la: \n";
	tong.Xuat();
	hieu = a.Tru(b);
	cout << "Hieu la: \n";
	hieu.Xuat();
	tich = a.Nhan(b);
	cout << "Tich la: \n";
	tich.Xuat();
	thuong = a.Chia(b);
	cout << "Thuong la: \n";
	thuong.Xuat();
	return 1;
}