#include "NongTrai.h"

int main()
{
	NongTrai A;
	A.Nhap();
	A.KeuLenViDoi();
	cout << "cho biet khoang thoi gian nuoi: (nhap vao so nam nuoi gia suc)" << endl;
	int t;
	cin >> t;
	A.SauThoiGianNuoi(t);
	A.ThongKe();
	//A.UpdateSoLuong();

	return 1;
}
