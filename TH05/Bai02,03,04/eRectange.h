#pragma once
#include "dParallelogram.h"
class Rectange :
	public Parallelogram
{
private:
	bool Isvalid()
	{
		if (Distance(point[0], point[1]) != Distance(point[2], point[3]) || Distance(point[0], point[3]) != Distance(point[1], point[2]) || Distance(point[0], point[2]) != Distance(point[1], point[3]))
			return true;
		return false;
	}
public:
	void Input()
	{
		do
		{
			Parallelogram::Input();
			if (Isvalid())
				cout << "It's not a Rectange, Pls Input again!" << endl;
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
		cout << "Rectange has four Points: " << endl;
		Polygon::Output();
	}
	void Move(float ox, float oy)
	{
		Parallelogram::Move(ox, oy);
	}
	~Rectange()
	{
		Parallelogram::~Parallelogram();
	}
};



