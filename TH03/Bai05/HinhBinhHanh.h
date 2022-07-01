#pragma once
#include "HinhThang.h"
class HinhBinhHanh :
	public HinhThang
{
	void Nhap()
	{
		HinhThang::Nhap();
	}

	bool IsValid()
	{
		if ((A.GetTung() == B.GetTung() && C.GetTung() == D.GetTung()) && (A.Distance(D) == B.Distance(C)))
			return true;
		return false;
	}
};