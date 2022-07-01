#include"QuanLy.h"

int main()
{
	QuanLy p;
	p.Nhap();
	p.Xuat();
	int sl = p.SoLuongSVTotNghiep();
	cout << endl << "so luong sinh vien tot nghiep: " << sl << endl;
	p.DaiHocCaoDiemTBNhat();
	return 0;
}