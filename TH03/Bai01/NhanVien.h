#pragma once
#include<iostream>
#include<string>
using namespace std;

class NhanVien
{
protected:
	string HoTen;
	string Ngaysinh;
	float Luong;
public:
	void Nhap()
	{
		cout << "Nhap HoTen nhan vien: " << endl;
		cin.ignore();
		getline(cin, HoTen);
		cout << "Nhap ngay sinh nhan vien: " << endl;
		getline(cin, Ngaysinh);
	}

	void Xuat()
	{
		cout << "Nhan vien: " << HoTen << endl;
		cout << "sinh ngay: " << Ngaysinh << endl;
		cout << "luong: " << Luong << endl;

	}
};

