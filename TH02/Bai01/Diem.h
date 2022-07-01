#pragma once
#include<iostream>
using namespace std;

class Diem
{
private:
	float TungDo, HoanhDo;
public:
	Diem();
	Diem(float NewTungDo);
	Diem(float NewTungDo, float NewHoanhDo);
	Diem(Diem& A);

	void Nhap();
	void Xuat();
	void setTungDo(float NewTungDo)
	{
		TungDo = NewTungDo;
	}
	void setHoanhDo(float NewHoanhDo)
	{
		HoanhDo = NewHoanhDo;
	}
	void setTungHoanhDo(float NewTungDo, float NewHoanhDo)
	{
		TungDo = NewTungDo;
		HoanhDo = NewHoanhDo;
	}
	float getTungDo()
	{
		return TungDo;
	}
	float getHoanhDo()
	{
		return HoanhDo;
	}
	void Move(float ox, float oy)
	{
		TungDo = TungDo + ox;
		HoanhDo = HoanhDo + oy;
	}
};

