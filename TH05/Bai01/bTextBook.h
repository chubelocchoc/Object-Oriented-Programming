#pragma once
#include "aBook.h"

class bTextBook :
	public aBook
{
private:
	int Lop;
public:
	void Nhap()
	{
		aBook::Nhap();
		cout << "Nhap sach lop may:" << endl;
		cin >> Lop;
	}

	void Xuat()
	{
		aBook::Xuat();
		cout << "Sach Lop " << Lop << endl;
	}

	float GetPrice()
	{
		return Price;
	}
};

