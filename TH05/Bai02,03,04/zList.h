#pragma once
#include"fSquare.h"
#include"Triangle.h"

class List
{
private:
	int n;
	Polygon** Shape;
public:

	void Input()
	{
		cout << "Input the quantity:" << endl;
		cin >> n;
		int flag;
		Shape = new Polygon * [n];
		for (int i = 0; i < n; i++)
		{
			cout << "Seclect type of Polygon & Input info.!" << endl;
			cout << "0.Triangle, 1.Quadrilateral, 2.Parallelogram, 3.Rectange, 4.Square" << endl;
			cin >> flag;
			switch (flag)
			{
			case 0:
			{
				Shape[i] = new Triangle();
				Shape[i]->Input();
				cout << "----------------------" << endl;
				break;
			}
			case 1:
			{
				Shape[i] = new Quadrilateral();
				Shape[i]->Input();
				cout << "----------------------" << endl;
				break;
			}
			case 2:
			{
				Shape[i] = new Parallelogram();
				Shape[i]->Input();
				cout << "----------------------" << endl;
				break;
			}
			case 3:
			{
				Shape[i] = new Rectange();
				Shape[i]->Input();
				cout << "----------------------" << endl;
				break;
			}
			case 4:
			{
				Shape[i] = new Square();
				Shape[i]->Input();
				cout << "----------------------" << endl;
				break;
			}
			default:
			{
				break;
			}
			}
		}
	}
	void Output()
	{
		for (int i = 0; i < n; i++)
		{
			cout << "The Polygon's info:" << endl;
			Shape[i]->Output();
		}
	}

	void Move(float ox, float oy)
	{
		for (int i = 0; i < n; i++)
		{
			Shape[i]->Move(ox, oy);
		}
	}
};



