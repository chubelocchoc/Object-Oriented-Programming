#include<iostream>
using namespace std;


struct ToaDo
{
	float x;
	float y;
};
typedef struct ToaDo Diem;
struct KhoangCach
{
	Diem A;
	Diem B;
};
typedef struct KhoangCach KC;

void Nhap(Diem&);
Diem DiemDoiXung(Diem);
void Xuat(Diem);
double KhoangCach(KC);

int main()
{
	cout << "Nhap toa do diem A:\n";
	Diem A;
	Nhap(A);
	cout << "Nhap toa do diem B:\n";
	Diem B;
	Nhap(B);
	cout << "Toa do diem doi xung voi A: \n";
	Diem DoiXung;
	DoiXung = DiemDoiXung(A);
	Xuat(DoiXung);
	cout << "khoang cach hai diem A vs B la:";
	KC AB;
	AB.A = A;
	AB.B = B;
	double kc = KhoangCach(AB);
	cout << kc << "\n";
	return 0;
}

void Nhap(Diem& A)
{
	cout << "x: ";
	cin >> A.x;
	cout << "y: ";
	cin >> A.y;

}

Diem DiemDoiXung(Diem A)
{
	Diem Temp;
	Temp.x = -A.x;
	Temp.y = -A.y;
	return Temp;
}

void Xuat(Diem A)
{
	cout << "x: " << A.x << "\n" << "y: " << A.y << "\n";
}

double KhoangCach(KC AB)
{
	double dim;
	dim = pow((((AB.A.x - AB.B.x) * (AB.A.x - AB.B.x)) + ((AB.A.y - AB.B.y) * (AB.A.y - AB.B.y))), 1.0/2);
	return dim;

}