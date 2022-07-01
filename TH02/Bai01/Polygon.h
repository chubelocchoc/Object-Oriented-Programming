#pragma once
#include "Diem.h"

class Polygon
{
protected:
	int n;
	Diem* point;
public:
	virtual void Input()   //Nhap
	{
		point = new Diem[n];
		cout << "Input Points:" << endl;
		for (int i = 0; i < n; i++)
		{
			bool flag = false;
			do
			{
				flag = false;
				cout << "Input Point " << i + 1 << ": " << endl;
				point[i].Nhap();
				switch (i)
				{
				case 1:
				{
					if (point[1].getHoanhDo() == point[0].getHoanhDo() && point[1].getTungDo() == point[0].getTungDo())
					{
						cout << "This Point was wrong. Pls input again!" << endl;
						flag = true;
					}
					break;
				}
				case 2:
				{
					if (point[2].getHoanhDo() == point[0].getHoanhDo() && point[2].getTungDo() == point[0].getTungDo())
					{
						cout << "This Point was wrong. Pls input again!";
						flag = true;
					}
					else if (point[2].getHoanhDo() == point[1].getHoanhDo() && point[2].getTungDo() == point[1].getTungDo())
					{
						cout << "This Point was wrong. Pls input again!";
						flag = true;
					}
					break;
				}
				case 3:
				{
					if (point[3].getHoanhDo() == point[0].getHoanhDo() && point[3].getTungDo() == point[0].getTungDo())
					{
						cout << "This Point was wrong. Pls input again!";
						flag = true;
					}
					else if (point[3].getHoanhDo() == point[1].getHoanhDo() && point[3].getTungDo() == point[1].getTungDo())
					{
						cout << "This Point was wrong. Pls input again!";
						flag = true;
					}
					else if (point[3].getHoanhDo() == point[2].getHoanhDo() && point[3].getTungDo() == point[2].getTungDo())
					{
						cout << "This Point was wrong. Pls input again!";
						flag = true;
					}
					break;
				}
				default:
				{
					break;
				}
				}
			} while (flag);
		}
	}


	virtual void Output()   //Xuat
	{
		for (int i = 0; i < n; i++)
		{
			cout << "point " << i + 1 << " : (" << point[i].getHoanhDo() << "," << point[i].getTungDo() << ")" << endl;
		}
	}

	virtual void Move(float ox, float oy)    //tinh tuyen
	{
		for (int i = 0; i < n; i++)
		{
			point[i].Move(ox, oy);
		}
	}
	float Distance(Diem a, Diem b)
	{
		float dis;
		dis = sqrt(pow((a.getHoanhDo() - b.getHoanhDo()), 2) + pow((a.getTungDo() - b.getTungDo()), 2));
		return dis;
	}
	~Polygon()
	{
		delete[] point;
		point = nullptr;
	}
};

