#include "PhanSo.h"
void PhanSo::Nhap()
{
	do
	{
		cout << "Nhap Tu: " << "\n";
		cin >> TuSo;
		if (TuSo == 0)
			cout << "Luu y: khong duoc nhap phan so = 0! Vui long nhap lai. \n";
	} while (TuSo == 0);
	do
	{
		cout << "Nhap Mau: " << "\n";
		cin >> MauSo;
		if (MauSo == 0)
			cout << "Luu y: mauso phai khac 0! Vui long nhap lai. \n";
	} while (MauSo == 0);
}
void PhanSo::Xuat()
{
	cout << "Phan So: " << TuSo << "/" << MauSo << "\n";
}

PhanSo PhanSo::Cong(PhanSo b)
{
	PhanSo tong;
	tong.TuSo = TuSo * b.MauSo + MauSo * b.TuSo;
	tong.MauSo = MauSo * b.MauSo;
	tong.RutGon();
	return tong;
}

PhanSo PhanSo::Tru(PhanSo b)
{
	PhanSo hieu;
	hieu.TuSo = TuSo * b.MauSo - MauSo * b.TuSo;
	hieu.MauSo = MauSo * b.MauSo;
	hieu.RutGon();
	return hieu;
}

PhanSo PhanSo::Nhan(PhanSo b)
{
	PhanSo tich;
	tich.TuSo = TuSo * b.TuSo;
	tich.MauSo = MauSo * b.MauSo;
	tich.RutGon();
	return tich;
}

PhanSo PhanSo::Chia(PhanSo b)
{
	PhanSo thuong;
	thuong.TuSo = TuSo * b.MauSo;
	thuong.MauSo = MauSo * b.TuSo;
	thuong.RutGon();
	return thuong;
}

float PhanSo::GiaTri()
{
	float p;
	p = (float)TuSo / MauSo;
	return p;
}

void PhanSo::RutGon()
{
	int UCLL = 1;
	PhanSo tem;
	tem.TuSo = abs(TuSo);
	tem.MauSo = abs(MauSo);
	if (tem.TuSo != 0)
	{
		while (tem.TuSo != tem.MauSo)
		{
			if (tem.TuSo > tem.MauSo)
				tem.TuSo = tem.TuSo - tem.MauSo;
			else
				tem.MauSo = tem.MauSo - tem.TuSo;
		}
		UCLL = tem.TuSo;
	}
	else if (tem.TuSo == 0)
	{
		UCLL = tem.MauSo;
	}
	TuSo = TuSo / UCLL;
	MauSo = MauSo / UCLL;
}
