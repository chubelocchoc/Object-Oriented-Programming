#pragma once
#include "aGiaSuc.h"
class De :
	public GiaSuc
{
public:
	De()
	{
		Tuoi = 0;
		Con = 0;
		Sua = 0;
		type = 3;
		TiengKieu = "beehee..beehee..beehee";
	}
	void Nhap()
	{
		GiaSuc::Nhap();
	}
	void ChoSua()
	{
		if (Tuoi % 3 == 0)
		{
			srand(time(NULL));
			Sua = Sua + rand() % 10;
		}
	}
};

