#pragma once
#include"People.h"

class Worker :public People
{
private:
	string MSCN;
public:
	void Nhap()
	{
		People::Nhap();
		cout << "Nhap ms cong nhan: " << endl;
		getline(cin, MSCN);
	}
	void Xuat()
	{
		People::Xuat();
		cout << "mssv: " << MSCN << endl;
	}

};
