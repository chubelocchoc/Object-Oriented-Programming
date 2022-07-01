#pragma once
#include "aBook.h"

class dNovel :
	public aBook
{
private:
	string TheLoai;
public:
	void Nhap()
	{
		aBook::Nhap();
		cout << "Nhap The Loai:" << endl;
		cin.ignore();
		getline(cin, TheLoai);
	}

	void Xuat()
	{
		aBook::Xuat();
		cout << "The Loai: " << TheLoai << endl;
	}

	float GetPrice()
	{
		return Price;
	}
};


