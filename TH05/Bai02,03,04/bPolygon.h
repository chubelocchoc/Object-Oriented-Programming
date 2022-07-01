#pragma once
#include "aPoint.h"

class Polygon
{
protected:
	int n;
	Point* point;
public:
	virtual void Input()
	{
		point = new Point[n];
		cout << "Input Points:" << endl;
		for (int i = 0; i < n; i++)
		{
			bool flag = false;
			do
			{
				flag = false;
				cout << "Input Point " << i + 1 << ": " << endl;
				point[i].Input();
				switch (i)
				{
				case 1:
				{
					if (point[1].GetXaxis() == point[0].GetXaxis() && point[1].GetYaxis() == point[0].GetYaxis())
					{
						cout << "This Point was wrong. Pls input again!" << endl;
						flag = true;
					}
					break;
				}
				case 2:
				{
					if (point[2].GetXaxis() == point[0].GetXaxis() && point[2].GetYaxis() == point[0].GetYaxis())
					{
						cout << "This Point was wrong. Pls input again!";
						flag = true;
					}
					else if (point[2].GetXaxis() == point[1].GetXaxis() && point[2].GetYaxis() == point[1].GetYaxis())
					{
						cout << "This Point was wrong. Pls input again!";
						flag = true;
					}
					break;
				}
				case 3:
				{
					if (point[3].GetXaxis() == point[0].GetXaxis() && point[3].GetYaxis() == point[0].GetYaxis())
					{
						cout << "This Point was wrong. Pls input again!";
						flag = true;
					}
					else if (point[3].GetXaxis() == point[1].GetXaxis() && point[3].GetYaxis() == point[1].GetYaxis())
					{
						cout << "This Point was wrong. Pls input again!";
						flag = true;
					}
					else if (point[3].GetXaxis() == point[2].GetXaxis() && point[3].GetYaxis() == point[2].GetYaxis())
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
	virtual void Output()
	{
		for (int i = 0; i < n; i++)
		{
			cout << "point " << i + 1 << " : (" << point[i].GetXaxis() << "," << point[i].GetYaxis() << ")" << endl;
		}
	}

	virtual void Move(float ox, float oy)
	{
		for (int i = 0; i < n; i++)
		{
			point[i].Move(ox, oy);
		}
	}
	float Distance(Point a, Point b)
	{
		float dis;
		dis = sqrt(pow((a.GetXaxis() - b.GetXaxis()), 2) + pow((a.GetYaxis() - b.GetYaxis()), 2));
		return dis;
	}
	~Polygon()
	{
		delete[] point;
		point = nullptr;
	}
};

