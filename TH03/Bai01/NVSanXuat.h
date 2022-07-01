#pragma once
#include"NhanVien.h"
class NVSanXuat :public NhanVien
{
private:
	float LuongCanBan;
	float SoSanPham;
public:
	void Nhap()
	{
		NhanVien::Nhap();
		cout << "Nhap so so sanpham: ";
		cin >> SoSanPham;
		cout << "Nhap muc luong coban: ";
		cin >> LuongCanBan;
	}
	void TinhLuong()
	{
		Luong = (LuongCanBan + SoSanPham) * (int)5;
	}
	void Xuat()
	{
		NhanVien::Xuat();
	}

};
