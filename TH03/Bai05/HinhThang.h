#pragma once
#include"Point.h"

class HinhThang
{
protected:
	Point A, B, C, D;
public:
	void Nhap()
	{
		cout << "Nhap toa do 4 diem co day be la 2 diem dau tien va day lon la 2 diem sau cung: " << endl;
		A.Nhap();
		B.Nhap();
		C.Nhap();
		D.Nhap();
	}

	bool IsValid()
	{
		if ((A.GetTung() == B.GetTung() && C.GetTung() == D.GetTung()) && (A.Distance(D) != B.Distance(C)))
			return true;
		return false;
	}
};

