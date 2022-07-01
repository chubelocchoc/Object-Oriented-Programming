#pragma once
#include "bPolygon.h"
class Quadrilateral :
	public Polygon
{
public:
	void Input()
	{
		n = 4;
		Polygon::Input();
	}
	void Output()
	{
		n = 4;
		cout << "Quadrilateral has four Points: " << endl;
		Polygon::Output();
	}
	void Move(float ox, float oy)
	{
		Polygon::Move(ox, oy);
	}
	~Quadrilateral()
	{
		Polygon::~Polygon();
	}
};

