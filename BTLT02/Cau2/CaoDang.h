#pragma once
#include"SinhVien.h"

class CaoDang:
	public SinhVien
{
private:
	int DiemTotNghiep;
public:
	float GetDiemTB()
	{
		return DiemTrungBinh;
	}
	CaoDang()
	{
		Type = 1;
	}
	bool XetTotNghiep()
	{
		if (SoTinChi >= 100 && DiemTrungBinh >= 5 && DiemTotNghiep >= 5)
			return true;
		return false;
	}

	void Nhap()
	{
		SinhVien::Nhap();
		cout << "Nhap diem totnghiep:" << endl;
		cin >> DiemTotNghiep;
	}

	void Xuat()
	{
		SinhVien::Xuat();
		cout << "Diem Tot Nghiep: " << DiemTotNghiep << endl;
	}
};

