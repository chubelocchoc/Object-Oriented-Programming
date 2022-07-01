#include "NVSanXuat.h"
#include "NVVanPhong.h"
int main()
{
	NVSanXuat sx;
	NVVanPhong vp;
	vp.Nhap();
	vp.TinhLuong();
	vp.Xuat();
	sx.Nhap();
	sx.TinhLuong();
	sx.Xuat();

	return 0;
}