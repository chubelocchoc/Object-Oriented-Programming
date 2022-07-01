#include<iostream>
using namespace std;
#include<iomanip>


struct ToaDo
{
	float x;
	float y;
};
typedef struct ToaDo Diem;
struct TAMGIAC
{
	Diem A;
	Diem B;
	Diem C;
};
typedef struct TAMGIAC tamgiac;

void Nhap(Diem&);
void Nhaptg(tamgiac&);
bool ktTamGiac(tamgiac);
Diem trongtam(tamgiac);
void Xuat(Diem);
double KhoangCach(Diem, Diem);
double chuvi(tamgiac);
double dientich(tamgiac);

int main()
{
	cout << "Nhap toa do 3 diem cua tam giac:\n";
	tamgiac tg;
	Nhaptg(tg);
	if (ktTamGiac(tg))
	{
		double s, cv;
		s = dientich(tg);
		cout << "Dien tich tam giac la: " << setprecision(6) << s << "(cm^2)\n";
		cv = chuvi(tg);
		cout << "Chu vi tam giac la: " << setprecision(6) << cv << "(cm)\n";
		Diem tt = trongtam(tg);
		cout << "trong tam cua tam giac:\n";
		Xuat(tt);
	}
	else
		cout << "3 diem khong thanh tam giac. Nhap lai, please!\n";
	return 0;
}

void Nhap(Diem& A)
{
	cout << "x: ";
	cin >> A.x;
	cout << "y: ";
	cin >> A.y;

}

void Xuat(Diem A)
{
	cout << "x: " << A.x << "\n" << "y: " << A.y << "\n";
}

void Nhaptg(tamgiac& tg)
{
	cout << "Diem 1: \n";
	Nhap(tg.A);
	cout << "Diem 2: \n";
	Nhap(tg.B);
	cout << "Diem 3: \n";
	Nhap(tg.C);

}

bool ktTamGiac(tamgiac tg)
{
	double a = KhoangCach(tg.B, tg.C);
	double b = KhoangCach(tg.A, tg.C);
	double c = KhoangCach(tg.A, tg.B);
	if (a + b <= c || b + c <= a || a + c <= b)
		return false;
	return true;
}

Diem trongtam(tamgiac tg)
{
	Diem tt;
	tt.x = (tg.A.x + tg.B.x + tg.C.x) / 3.0;
	tt.y = (tg.A.y + tg.B.y + tg.C.y) / 3.0;
	return tt;
}

double KhoangCach(Diem A, Diem B)
{
	double dim;
	dim = pow((((A.x - B.x) * (A.x - B.x)) + ((A.y - B.y) * (A.y - B.y))), 1.0 / 2);
	return dim;

}

double chuvi(tamgiac tg)
{
	double cv;
	cv = KhoangCach(tg.A, tg.B) + KhoangCach(tg.A, tg.C) + KhoangCach(tg.B, tg.C);
	return cv;
}

double dientich(tamgiac tg)
{
	double p = chuvi(tg)/2.0;
	double s = sqrt(p * (p - KhoangCach(tg.A, tg.B)) * (p - KhoangCach(tg.A, tg.C)) * (p - KhoangCach(tg.B, tg.C)));
	return s;
}