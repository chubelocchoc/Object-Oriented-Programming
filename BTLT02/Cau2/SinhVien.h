#pragma once
#include<iostream>
#include<string>
using namespace std;

class SinhVien
{
protected:
	int MaSV;
	string HoTen;
	string DiaChi;
	int SoTinChi;
	float DiemTrungBinh;
public:
	int Type;
	virtual float GetDiemTB()
	{
		return DiemTrungBinh;
	}
	virtual bool XetTotNghiep()
	{
		return 0;
	}

	virtual void Nhap()
	{
		cout << "Nhap Ma Sinh Vien:" << endl;
		cin >> MaSV;
		cout << "Nhap Ten Sinh Vien:" << endl;
		cin.ignore();
		getline(cin, HoTen);
		cout << "Nhap DiaChi Sinh Vien:" << endl;
		getline(cin, DiaChi);
		cout << "Nhap so tinchi da hoan thanh:" << endl;
		cin >> SoTinChi;
		cout << "Nhap Diem trung binh:" << endl;
		cin >> DiemTrungBinh;
	}

	virtual void Xuat()
	{
		cout << "Ma Sinh Vien: " << MaSV << endl;
		cout << "Ten Sinh Vien: " << HoTen << endl;
		cout << "DiaChi Sinh Vien: " << DiaChi << endl;
		cout << "So tinchi da hoan thanh: " << SoTinChi << endl;
		cout << "Diem trung binh: " << DiemTrungBinh << endl;
	}
};

