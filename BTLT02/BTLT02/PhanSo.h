#pragma once
#include<iostream>
using namespace std;
class PhanSo
{
private:
	int TuSo, MauSo;

	void RutGon()
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
public:
	PhanSo()
	{
		TuSo = 1;
		MauSo = 1;
	}

	void Nhap()
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

	void Xuat()
	{
		cout << "Phan So: " << TuSo << "/" << MauSo << "\n";
	}

	friend istream& operator>>(istream& is, PhanSo& p)
	{
		cout << "Nhap Tu:" << endl;
		is >> p.TuSo;
		cout << "Nhap Mau:" << endl;
		is >> p.MauSo;
		return is;
	}

	friend ostream& operator<<(ostream& os, PhanSo p)
	{
		os << p.TuSo << "/" << p.MauSo << endl;
		return os;
	}

	PhanSo Cong(PhanSo b)
	{
		PhanSo tong;
		tong.TuSo = TuSo * b.MauSo + MauSo * b.TuSo;
		tong.MauSo = MauSo * b.MauSo;
		tong.RutGon();
		return tong;
	}

	PhanSo operator++()
	{
		PhanSo a = *this;
		this->Cong(PhanSo());
		return a;
	}

	PhanSo	operator++()
	{
		this->Cong(PhanSo());
		return *this;
	}
};

