#include"Diem.h"
#include"Triangle.h"

int main()
{
	cout << "*********Excercise 1********\n";
	Diem A;
	cout << "Input Point A: \n";
	A.Nhap();
	A.Xuat();
	A.Move(5, 6);
	cout << "Point A after moving:\n";
	A.Xuat();
	cout << "*********Excercise 2********\n";
	Triangle TamGiac;
	TamGiac.Nhap();
	TamGiac.Xuat();
	TamGiac.Move(30, 0);
	cout << "The Triangle after moving:\n";
	TamGiac.Xuat();
	TamGiac.Rotate(30);
	cout << "The Triangle after rotated:\n";
	TamGiac.Xuat();
	cout << "The Triangle after zoomed:\n";
	TamGiac.Zoom(2);
	TamGiac.Xuat();
	return 1;
}