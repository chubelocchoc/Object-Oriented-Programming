#pragma once
#include "bTextBook.h"
#include "cJounal.h"
#include "dNovel.h"
class eList
{
private:
	int n;
	aBook** lib;
public:
	void Nhap()
	{
		cout << "Nhap vao so luong sach can nhap thong tin:" << endl;
		cin >> n;
		lib = new aBook * [n];
		int flag;
		for (int i = 0; i < n; i++)
		{
			cout << "Chon the loai sach can nhap thong tin: " << endl;
			cout << "The Loai: 0.SachGiaoKhoa, 1.TieuThuyet, 2.TapChi" << endl;
			cin >> flag;
			switch (flag)
			{
			case 1:
			{
				lib[i] = new dNovel();
				lib[i]->Nhap();
				cout << "****************************" << endl;
				break;
			}
			case 2:
			{
				lib[i] = new cJounal();
				lib[i]->Nhap();
				cout << "****************************" << endl;
				break;
			}
			default:
			{
				lib[i] = new bTextBook();
				lib[i]->Nhap();
				cout << "****************************" << endl;
				break;
			}
			}
		}
	}
	void FilterPrice()
	{
		cout << "chon muc gia can filter:" << endl;
		cout << "0.Tu 0vnd-50000vnd, 1. Tu 51000vnd-100000vnd, 2. Tu 101000vnd tro len." << endl;
		int flag;
		cin >> flag;
		for (int i = 0; i < n; i++)
		{
			switch (flag)
			{
			case 0:
			{
				if (lib[i]->GetPrice() <= 50000)
				{
					cout << "********** Book co gia tu 0-50000vnd **********" << endl;
					lib[i]->Xuat();
					cout << "****************************" << endl;
				}
				break;
			}
			case 1:
			{
				if (lib[i]->GetPrice() <= 100000 && lib[i]->GetPrice() > 50000)
				{
					cout << "********** Book co gia tu 50000-100000vnd **********" << endl;
					lib[i]->Xuat();
					cout << "****************************" << endl;
				}
				break;
			}
			case 2:
			{
				if (lib[i]->GetPrice() > 100000)
				{
					cout << "********** Book co gia tu 100000vnd tro len **********" << endl;
					lib[i]->Xuat();
					cout << "****************************" << endl;
				}
				break;
			}
			default:
				break;
			}

		}
	}

	~eList()
	{
		for (int i = 0; i < n; i++)
		{
			delete[] lib[i];
			lib[i] = nullptr;
		}
		delete[]lib;
		lib = nullptr;
	}
};

