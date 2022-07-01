#include"Singer.h"
#include"Student.h"
#include"Worker.h"
int main()
{
	Student st;
	Worker wk;
	Singer sg;
	cout << "nhap thong tin hoc sinh: " << endl;
	st.Nhap();
	st.Xuat();
	cout << "nhap thong tin cong nhan: " << endl;
	wk.Nhap();
	wk.Xuat();
	cout << "nhap thong tin ca si: " << endl;
	sg.Nhap();
	sg.Xuat();

	return 0;
}