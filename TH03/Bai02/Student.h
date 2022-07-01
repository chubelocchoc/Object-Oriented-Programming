#pragma once
#include"People.h"

class Student :public People
{
private:
	string MSSV;
public:
	void Nhap()
	{
		People::Nhap();
		cout << "Nhap mssv: " << endl;
		getline(cin, MSSV);
		//getline(cin, People::CMND);
		//getline(cin, People::HoTen);
	}
	void Xuat()
	{
		People::Xuat();
		cout << "mssv: " << MSSV << endl;
		//cout << "hoten: " << HoTen << endl;
	}

};
