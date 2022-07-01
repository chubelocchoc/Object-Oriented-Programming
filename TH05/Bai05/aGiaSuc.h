#pragma once
#include<ctime>
#include<iostream>
#include<string>
using namespace std;

class GiaSuc
{
protected:
	int MaSo;
	int Tuoi;
	float Sua;
	int Con;
	string TiengKieu;
public:
	int type;

	virtual void Nhap()
	{
		cout << "Nhap Ma So: " << endl;
		cin >> MaSo;
		cout << "Nhap Tuoi:" << endl;
		cin >> Tuoi;
	}

	void KeuLen()
	{
		cout << TiengKieu << endl;
	}
	void SinhCon()
	{
		if (Tuoi % 3 == 0)
		{
			srand(time(NULL));
			Con = Con + rand() % 4;
		}
	}

	int GetTuoi()
	{
		return Tuoi;
	}

	int GetCon()
	{
		return Con;
	}

	int GetSua()
	{
		return Sua;
	}

	void LenTuoi()
	{
		Tuoi = Tuoi + 1;
	}

	virtual void ChoSua()
	{

	}
};
