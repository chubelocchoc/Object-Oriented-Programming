#pragma once
#include"People.h"

class Singer :public People
{
private:
	string LoaiNhac;
public:
	void Nhap()
	{
		People::Nhap();
		cout << "Nhap ms cong nhan: " << endl;
		getline(cin, LoaiNhac);
	}
	void Xuat()
	{
		People::Xuat();
		cout << "mssv: " << LoaiNhac << endl;
	}

};

