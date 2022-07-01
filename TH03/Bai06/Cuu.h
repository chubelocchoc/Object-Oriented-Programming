#pragma once
#include "GiaSuc.h"
class Cuu :
	public GiaSuc
{
public:
	Cuu()
	{
		Con = 0;
		Sua = 0;
		type = 2;
		TiengKieu = "hoo..hoo...hoo";
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
			Sua = Sua + rand() % 5;
		}
	}
};

