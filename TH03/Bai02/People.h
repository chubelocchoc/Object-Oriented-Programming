#pragma once
#include<iostream>
using namespace std;
#include<string>
class People
{
protected:
	string HoTen;
	string CMND;
public:
	void Nhap()
	{
		cout << "Nhap hoten" << endl;
		//cin.ignore();
		getline(cin, HoTen);
		cout << "Nhap cmnd" << endl;
		//cin.ignore();
		getline(cin, CMND);
	}
	void Xuat()
	{
		cout << "ho ten: " << HoTen << endl;
		cout << "cmnd " << CMND << endl;
	}

};


