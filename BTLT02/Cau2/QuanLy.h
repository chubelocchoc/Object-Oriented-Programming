#pragma once
#include"CaoDang.h"
#include"DaiHoc.h"
#include<vector>

class QuanLy
{
private:
	int n;
	SinhVien** arr;
public:
	void Nhap()
	{
		cout << "Nhap So Luong Sinh Vien Can Quan Ly:" << endl;
		cin >> n;
		arr = new SinhVien * [n];
		int flag = 0;
		for (int i = 0; i < n; i++)
		{
			cout << "Chon He Cua Sinh Vien Roi Nhap Thong Tin:" << endl;
			cout << "1.Cao Dang     2.Dai Hoc" << endl;
			cin >> flag;
			if (flag==1)
			{
				arr[i] = new CaoDang();
				arr[i]->Nhap();
			}
			else
			{
				arr[i] = new DaiHoc();
				arr[i]->Nhap();
			}
		}
	}

	void Xuat()
	{
		cout << endl << "*****Danh Sach Cac Sinh Vien Vua Nhap: *****" << endl;
		for (int i = 0; i < n; i++)
		{
			cout << i + 1 << "-{" << endl;
			arr[i]->Xuat();
			cout << "}" << endl;
		}
	}

	int SoLuongSVTotNghiep()
	{
		int dem = 0;
		for (int i = 0; i < n; i++)
		{
			if (arr[i]->XetTotNghiep())
				dem = dem +1;
		}
		return dem;
	}

	void DaiHocCaoDiemTBNhat()
	{
		float temp =0;
		int flag = 0;
		cout << endl << "*****Cac sinh vien dai hoc co diem trung binh cao nhat *****" << endl;
		for (int i = 0; i < n; i++)
		{
			if (arr[i]->Type==2)
				if (temp<=arr[i]->GetDiemTB())
					temp = arr[i]->GetDiemTB();
		}
		for (int i = 0; i < n; i++)
		{
			if (arr[i]->Type == 2)
				if (temp == arr[i]->GetDiemTB())
					arr[i]->Xuat();
		}
	}
};