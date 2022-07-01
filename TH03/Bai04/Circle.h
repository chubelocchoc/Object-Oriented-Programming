#pragma once
#include "Elip.h"
#include "Point.h"

class Circle : public Elip
{
public:
	void Nhap()
	{
		cout << "Nhap toado Center: " << endl;
		Center.Nhap();
		cout << "Nhap ban duong tron: " << endl;
		cin >> BigRadius;
		SmallRadius = BigRadius;
	}

	void Xuat()
	{
		cout << "hinh tron co tam: ";
		Center.Xuat();
		cout << "hinh tron co ban kinh r= " << BigRadius << endl;
	}

	float Area()
	{
		float area;
		area = Elip::Area();
		return area;
	}
};
