#pragma once
#include "aGiaSuc.h"
class Bo :
	public GiaSuc
{
public:
	Bo()
	{
		Tuoi = 0;
		Con = 0;
		Sua = 0;
		type = 1;
		TiengKieu = "umbo..umbo..umbo";
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
			Sua = Sua + rand() % 20;
		}
	}
};

