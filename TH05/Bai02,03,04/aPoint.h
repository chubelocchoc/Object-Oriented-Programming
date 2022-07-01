#pragma once
#include <iostream>
using namespace std;
#include<string>

class Point
{
private:
	float Xaxis, Yaxis;
public:
	Point()
	{
		Xaxis = 0;
		Yaxis = 0;
	}

	Point(float b)
	{
		Xaxis = b;
		Yaxis = b;
	}
	Point(float xaxis, float yaxis)
	{
		Xaxis = xaxis;
		Yaxis = yaxis;
	}
	Point(Point& a)
	{
		Xaxis = a.Xaxis;
		Yaxis = a.Yaxis;
	}

	void Input()
	{
		cout << "Input X-Axis coordinate: ";
		cin >> Xaxis;
		cout << "Input Y-Axis coordinate: ";
		cin >> Yaxis;
	}

	float GetXaxis()
	{
		return Xaxis;
	}
	float GetYaxis()
	{
		return Yaxis;
	}

	void Move(float ox, float oy)
	{
		Xaxis = Xaxis + ox;
		Yaxis = Yaxis + oy;
	}
};


