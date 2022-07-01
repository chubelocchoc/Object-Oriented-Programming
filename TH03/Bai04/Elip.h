#pragma once
#include"Point.h"

class Elip
{
protected:
	Point Center;
	float BigRadius;
	float SmallRadius;
public:
	void Nhap()
	{
		cout << "Nhap toado Center: ";
		Center.Nhap();
		cout << "Nhap ban kinh lon: ";
		cin >> BigRadius;
		cout << "Nhap ban kinh nho: ";
		cin >> SmallRadius;
	}
	float Area()
	{
		float area = (float)3.14 * BigRadius * SmallRadius;
		return area;
	}
};

