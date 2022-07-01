#pragma once
#include "bPolygon.h"

class Triangle :
	public Polygon
{
public:
	void Input()
	{
		n = 3;
		Polygon::Input();
	}
	void Output()
	{
		n = 3;
		cout << "Triangle has Tree Points: " << endl;
		Polygon::Output();
	}
	void Move(float ox, float oy)
	{
		Polygon::Move(ox, oy);
	}
	~Triangle()
	{
		Polygon::~Polygon();
	}
};
