#pragma once
#include<iostream>
using namespace std;
#include"Diem.h"
#include<math.h>


class Triangle
{
private:
	Diem A;
	Diem B;
	Diem C;
public:
	Triangle()
	{
		A.setTungHoanhDo(0, 0);
		B.setTungHoanhDo(0, 1);
		C.setTungHoanhDo(1, 0);
	}
	Triangle(Diem NewA)
	{
		A = NewA;
		B.setTungHoanhDo(0, 1);
		C.setTungHoanhDo(1, 0);
	}
	Triangle(Diem NewA, Diem NewB)
	{
		A = NewA;
		B = NewB;
		C.setTungHoanhDo(1, 0);
	}
	Triangle(Diem NewA, Diem NewB, Diem NewC)
	{
		A = NewA;
		B = NewB;
		C = NewC;
	}
	Triangle(Triangle& NewTriangle)
	{
		A = NewTriangle.A;
		B = NewTriangle.B;
		C = NewTriangle.C;
	}

	void Nhap()
	{
		do
		{
			cout << "Input Coordinate Point A :\n";
			A.Nhap();
			cout << "Input Coordinate Point B :\n";
			B.Nhap();
			cout << "Input Coordinate Point C :\n";
			C.Nhap();
			if ((A.getTungDo() == B.getTungDo() && A.getTungDo() == C.getTungDo()) || (A.getHoanhDo() == B.getHoanhDo() && A.getHoanhDo() == C.getHoanhDo()))
			{
				cout << "Not exist a triangle, Pls input again!\n";
			}
		} while ((A.getTungDo() == B.getTungDo() && A.getTungDo() == C.getTungDo()) || (A.getHoanhDo() == B.getHoanhDo() && A.getHoanhDo() == C.getHoanhDo()));

	}
	void Xuat()
	{
		cout << "The Triangle have three Points: A(" << A.getTungDo() << "," << A.getHoanhDo() << "), B(" << B.getTungDo() << "," << B.getHoanhDo() << "), C(" << A.getTungDo() << ", " << A.getHoanhDo() << ")\n";
	}
	void Move(float ox, float oy)
	{
		A.Move(ox, oy);
		B.Move(ox, oy);
		C.Move(ox, oy);
	}
	Diem CenterTriangle()
	{
		Diem I;
		I.setTungDo((A.getTungDo() + B.getTungDo() + C.getTungDo()) / 3);
		I.setHoanhDo((A.getHoanhDo() + B.getHoanhDo() + C.getHoanhDo()) / 3);
		return I;
	}
	bool IsValid()
	{
		if (A.getTungDo() != B.getTungDo() && B.getTungDo() != C.getTungDo())
		{
			return true;
		}
		return false;
	}
	void Rotate(float Angle)
	{
		A.setTungDo(A.getTungDo() * cos(Angle) - A.getHoanhDo() * sin(Angle));
		A.setHoanhDo(A.getTungDo() * sin(Angle) - A.getHoanhDo() * cos(Angle));
		B.setTungDo(B.getTungDo() * cos(Angle) - B.getHoanhDo() * sin(Angle));
		B.setHoanhDo(B.getTungDo() * sin(Angle) - B.getHoanhDo() * cos(Angle));
		C.setTungDo(C.getTungDo() * cos(Angle) - C.getHoanhDo() * sin(Angle));
		C.setHoanhDo(C.getTungDo() * sin(Angle) - C.getHoanhDo() * cos(Angle));
	}
	void Zoom(float Scall)
	{
		A.setTungDo(A.getTungDo() * Scall);
		A.setHoanhDo(A.getHoanhDo() * Scall);
		B.setTungDo(B.getTungDo() * Scall);
		B.setHoanhDo(B.getHoanhDo() * Scall);
		C.setTungDo(C.getTungDo() * Scall);
		C.setHoanhDo(C.getHoanhDo() * Scall);
	}
};

