#pragma once
#include "Point.h"


class Quadrilateral
{
private:
	Point A, B, C, D;
public:
	Quadrilateral()			//khoi tao
	{
		// Mac dinh la A(0, 0)
		B.SetOy(1);			// Mac dinh la B(0, 0)
		C.SetOxOy(1, 1);	// Mac dinh la C(0, 0)
		D.SetOx(1);			// Mac dinh la D(0, 0)
	}

	Quadrilateral(Point newA)   //khoi tao
	{
		A.SetOxOy(newA.GetOx(), newA.GetOy());
	}

	Quadrilateral(Point newA, Point newB)   //khoi tao
	{
		A.SetOxOy(newA.GetOx(), newA.GetOy());
		B.SetOxOy(newB.GetOx(), newB.GetOy());
	}

	Quadrilateral(Point newA, Point newB, Point newC)   //khoi tao
	{
		A.SetOxOy(newA.GetOx(), newA.GetOy());
		B.SetOxOy(newB.GetOx(), newB.GetOy());
		C.SetOxOy(newC.GetOx(), newC.GetOy());
	}

	Quadrilateral(Point newA, Point newB, Point newC, Point newD)   //khoi tao
	{
		A.SetOxOy(newA.GetOx(), newA.GetOy());
		B.SetOxOy(newB.GetOx(), newB.GetOy());
		C.SetOxOy(newC.GetOx(), newC.GetOy());
		D.SetOxOy(newD.GetOx(), newD.GetOy());
	}

	Quadrilateral(Quadrilateral& NewQuad)    //khoi tao
	{
		A = NewQuad.A;
		B = NewQuad.B;
		C = NewQuad.C;
		D = NewQuad.D;
	}

	Point GetPointA()   // truy van
	{
		return A;
	}

	Point GetPointB()   // truy van
	{
		return B;
	}

	Point GetPointC()   // truy van
	{
		return C;
	}

	Point GetPointD()   // truy van
	{
		return D;
	}

	void SetPointA(Point NewPoint)   // Cap nhat
	{
		A = NewPoint;
	}

	void SetPointB(Point NewPoint)   // Cap nhat
	{
		B = NewPoint;
	}

	void SetPointC(Point NewPoint)   // Cap nhat
	{
		C = NewPoint;
	}

	void SetPointD(Point NewPoint)  // Cap nhat
	{
		D = NewPoint;
	}


	friend istream& operator>>(istream& is, Quadrilateral& q)
	{
		for (int i = 0; i < 4; i++)
		{
			switch (i)
			{
			case 0:
			{
				cout << "Input Point A:" << endl;
				is >> q.A;
				break;
			}
			case 1:
			{
				cout << "Input Point B:" << endl;
				is >> q.B;
				break;
			}
			case 2:
			{
				cout << "Input Point C:" << endl;
				is >> q.C;
				break;
			}
			case 3:
			{
				cout << "Input Point D:" << endl;
				is >> q.D;
				break;
			}
			default:
			{
				break;
			}
			}
		}
		return is;
	}


	friend ostream& operator<<(ostream& os, Quadrilateral q)
	{
		os << "Diem A" << q.A << endl;
		os << "Diem B" << q.B << endl;
		os << "Diem C" << q.C << endl;
		os << "Diem D" << q.D << endl;
		return os;
	}


	bool IsvalidHinhBinhHanh()
	{
		if (Distance(A, B) != Distance(C, D) || Distance(A, D) != Distance(B, C))
			return true;
		return false;
	}

	float Distance(Point a, Point b)
	{
		float dis;
		dis = sqrt(pow((a.GetOx() - b.GetOx()), 2) + pow((a.GetOy() - b.GetOy()), 2));
		return dis;
	}
};



