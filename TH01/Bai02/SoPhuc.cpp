#include"SoPhuc.h"

void SoPhuc::Nhap()
{
	do
	{
		cout << "Nhap Phan Thuc: " << "\n";
		cin >> Thuc;
		if (Thuc == 0)
			cout << "Luu y: khong duoc so = 0! Vui long nhap lai. \n";
	} while (Thuc == 0);
	do
	{
		cout << "Nhap Phan Ao: " << "\n";
		cin >> Ao;
		if (Ao == 0)
			cout << "Luu y: khong duoc so = 0! Vui long nhap lai. \n";
	} while (Ao == 0);
}

void SoPhuc::Xuat()
{
	cout << "Phan thuc: " << Thuc << ", Phan ao: " << Ao << "\n";
}

SoPhuc SoPhuc::Cong(SoPhuc b)
{
	SoPhuc tong;
	tong.Ao = Ao + b.Ao;
	tong.Thuc = Thuc + b.Thuc;
	return tong;
}

SoPhuc SoPhuc::Tru(SoPhuc b)
{
	SoPhuc hieu;
	hieu.Thuc = Thuc - b.Thuc;
	hieu.Ao = Ao - b.Ao;
	return hieu;
}
SoPhuc SoPhuc::Nhan(SoPhuc b)
{
	SoPhuc tich;
	tich.Ao = Ao * b.Ao - Thuc * b.Thuc;
	tich.Thuc = Ao * b.Thuc + Thuc * b.Ao;
	return tich;
}
SoPhuc SoPhuc::Chia(SoPhuc b)
{
	SoPhuc thuong;
	thuong.Ao = (Ao * b.Ao + Thuc * b.Thuc) / (b.Ao * b.Ao + b.Thuc * b.Thuc);
	thuong.Thuc = (b.Ao * Thuc + Ao * b.Thuc) / (b.Ao * b.Ao + b.Thuc * b.Thuc);
	return thuong;
}