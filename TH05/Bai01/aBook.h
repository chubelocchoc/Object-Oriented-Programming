#pragma once
#include<string>
#include<iostream>
using namespace std;

class aBook
{
protected:
	string Name;
	float Price;
	int PublishingDate;
public:
	virtual void Nhap()
	{
		cout << "Nhap Ten: " << endl;
		cin.ignore();
		getline(cin, Name);
		cout << "Nhap Gia: " << endl;
		cin >> Price;
		cout << "Nhap Nam Phat Hanh Sach: " << endl;
		cin >> PublishingDate;
	}
	virtual void Xuat()
	{
		cout << "Ten la: " << Name << endl;
		cout << "Ngay Phat Hanh: " << PublishingDate << endl;
		cout << "Gia: " << Price << endl;
	}

	virtual float GetPrice()
	{
		return Price;
	}
};

