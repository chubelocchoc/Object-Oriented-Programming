#pragma once
#include "GiaSuc.h"
class Bo :
	public GiaSuc
{
public:
	Bo()
	{
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

