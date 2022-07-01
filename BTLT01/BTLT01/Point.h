#pragma once
#include<string>
#include<iostream>
using namespace std;

class Point
{
private:
	float Ox;
	float Oy;
public:
	Point() //khoi tao
	{
		Ox = 0;
		Oy = 0;
	}
	
	Point(float NewOxOy)  //khoi tao
	{
		Ox = NewOxOy;
		Oy = NewOxOy;
	}

	Point(float newOx, float newOy)  //khoi tao
	{
		Ox = newOx;
		Oy = newOy;
	}

	Point(Point & NewPoint)  //khoi tao coppy
	{
		Ox = NewPoint.Ox;
		Oy = NewPoint.Oy;
	}

	float GetOx() // truy van ox
	{
		return Ox;
	}

	float GetOy() // truy van oy
	{
		return Oy;
	}

	void SetOx(float newox) // Cap nhat
	{
		Ox = newox;
	}

	void SetOy(float newoy)  // Cap nhat
	{
		Oy = newoy;
	}

	void SetOxOy(float newox, float newoy) // Cap nhat
	{
		Ox = newox;
		Oy = newoy;
	}


	friend istream& operator>>(istream& is, Point& b)
	{
		cout << "Input Ox:" << endl;
		is >> b.Ox;
		cout << "Input Oy:" << endl;
		is >> b.Oy;
		return is;
	}

	friend ostream& operator<<(ostream& os, Point b)
	{
		os << "(" << b.Ox << ", " << b.Oy << ") ";
		return os;
	}

	Point& operator+(const Point& a)
	{
		Ox = Ox + a.Ox;
		Oy = Oy + a.Oy;
		return *this;
	}
};

