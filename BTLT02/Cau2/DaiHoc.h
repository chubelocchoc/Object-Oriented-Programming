#pragma once
#include"SinhVien.h"
class DaiHoc :
	public SinhVien
{
private:
	string TenLuanVan;
	float DiemLuanVan;
public:
	float GetDiemTB()
	{
		return DiemTrungBinh;
	}
	DaiHoc()
	{
		Type = 2;
	}
	bool XetTotNghiep()
	{
		if (SoTinChi >= 140 && DiemTrungBinh >= 5 && DiemLuanVan >= 5)
			return true;
		return false;
	}

	void Nhap()
	{
		SinhVien::Nhap();
		cout << "Nhap ten luanvan:" << endl;
		cin.ignore();
		getline(cin, TenLuanVan);
		cout << "Nhap diem luanvan:" << endl;
		cin >> DiemLuanVan;
	}

	void Xuat()
	{
		SinhVien::Xuat();
		cout << "Ten luanvan: " << TenLuanVan <<endl;
		cout << "Diem luanvan: " << DiemLuanVan <<endl;
	}
};

