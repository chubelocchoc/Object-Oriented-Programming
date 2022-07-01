#pragma once
#include "cQuadrilateral.h"

class Parallelogram :
	public Quadrilateral
{
private:
	bool Isvalid()
	{
		if (Distance(point[0], point[1]) != Distance(point[2], point[3]) || Distance(point[0], point[3]) != Distance(point[1], point[2]))
			return true;
		return false;
	}
public:
	void Input()
	{
		do
		{
			Quadrilateral::Input();
			if (Isvalid())
				cout << "It's not a Parallelogram, Pls Input again!" << endl;
		} while (Isvalid());
	}
	float Distance(Point a, Point b)
	{
		float dis;
		dis = sqrt(pow((a.GetXaxis() - b.GetXaxis()), 2) + pow((a.GetYaxis() - b.GetYaxis()), 2));
		return dis;
	}
	void Output()
	{
		n = 4;
		cout << "Parallelogram has four Points: " << endl;
		Polygon::Output();
	}
	void Move(float ox, float oy)
	{
		Quadrilateral::Move(ox, oy);
	}
	~Parallelogram()
	{
		Quadrilateral::~Quadrilateral();
	}
};

