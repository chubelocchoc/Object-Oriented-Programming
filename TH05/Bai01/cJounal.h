#pragma once
#include "aBook.h"

class cJounal :
	public aBook
{
private:
	string QuocGia;
public:
	void Nhap()
	{
		aBook::Nhap();
		cout << "Nhap Quoc Gia:" << endl;
		getline(cin, QuocGia);
	}

	void Xuat()
	{
		aBook::Xuat();
		cout << "Tap chi thuoc nuoc: " << QuocGia << endl;
	}

	float GetPrice()
	{
		return Price;
	}
};


