#pragma once
#include"NhanVien.h"
class NVVanPhong :public NhanVien
{
private:
	float SoNgayLamViec;
public:
	void Nhap()
	{
		NhanVien::Nhap();
		cout << "Nhap so ngay lam viec: ";
		cin >> SoNgayLamViec;
	}
	void TinhLuong()
	{
		Luong = SoNgayLamViec * (int)100;
	}
	void Xuat()
	{
		NhanVien::Xuat();
	}
};
