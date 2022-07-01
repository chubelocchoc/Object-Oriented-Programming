#pragma once
#include<iostream>
using namespace std;
#include<cmath>

class PhanSo
{
private:
	int TuSo, MauSo;
public:
	void Nhap();
	void Xuat();
	PhanSo Cong(PhanSo b);
	PhanSo Tru(PhanSo b);
	PhanSo Nhan(PhanSo b);
	PhanSo Chia(PhanSo b);
	float GiaTri();
	void RutGon();

};
