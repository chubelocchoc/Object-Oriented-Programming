#pragma once
#include<iostream>
using namespace std;

class Point
{
private:
	float TungDo;
	float HoanhDo;
public:
	void Nhap()
	{
		cout << "Nhap Hoanh Do: ";
		cin >> HoanhDo;
		cout << "Nhap Tung Do: ";
		cin >> TungDo;
	}

	void Xuat()
	{
		cout << "(" << HoanhDo << "," << TungDo << ")" << endl;
	}

	float Distance(Point B)
	{
		float dis;
		dis = sqrt(pow((HoanhDo - B.HoanhDo), 2) + pow((TungDo - B.TungDo), 2));
		return dis;
	}

	float GetTung()
	{
		return TungDo;
	}
	float GetHoanh()
	{
		return HoanhDo;
	}
};

