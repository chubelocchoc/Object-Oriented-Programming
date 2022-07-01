#include "Diem.h"

Diem::Diem()
{
	TungDo = 0;
	HoanhDo = 0;
}
Diem::Diem(float NewTungDo)
{
	TungDo = NewTungDo;
	HoanhDo = 0;
}
Diem::Diem(float NewTungDo, float NewHoanhDo)
{
	TungDo = NewTungDo;
	HoanhDo = NewHoanhDo;
}
Diem::Diem(Diem& A)
{
	TungDo = A.TungDo;
	HoanhDo = A.HoanhDo;
}
void Diem::Nhap()
{
	cout << "Input Coordinate Ox:";
	cin >> TungDo;
	cout << "Input Coordinate Oy:";
	cin >> HoanhDo;
}
void Diem::Xuat()
{
	cout << "Coordinate: (" << TungDo << "," << HoanhDo << ")\n";
}
