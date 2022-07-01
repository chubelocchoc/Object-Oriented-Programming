#pragma once
#include<vector>
#include "bBo.h"
#include "cCuu.h"
#include "dDe.h"
class NongTrai
{
private:
	int SoLuongGiaSuc;
	int SoLuongBo, SoLuongCuu, SoLuongDe;
	float SoLuongSua;
	vector <GiaSuc*>  arr;
public:
	void Nhap()
	{
		cout << "So luong Bo ban dau la:" << endl;
		cin >> SoLuongBo;
		cout << "So luong Cuu ban dau la:" << endl;
		cin >> SoLuongCuu;
		cout << "So luong De ban dau la:" << endl;
		cin >> SoLuongDe;
		SoLuongGiaSuc = SoLuongBo + SoLuongDe + SoLuongCuu;
		arr.assign(SoLuongGiaSuc, new GiaSuc());
		int flag;
		for (int i = 0; i < SoLuongGiaSuc; i++)
		{
			cout << "chon loai gia suc va nhap thong tin." << endl;
			cout << "1.Bo, 2.Cuu, 3.De" << endl;
			cin >> flag;
			switch (flag)
			{
			case 1:
			{
				cout << "Nhap thong tin cua Bo:" << endl;
				arr[i] = new Bo();
				arr[i]->Nhap();
				break;
			}
			case 2:
			{
				cout << "Nhap thong tin cua Cuu:" << endl;
				arr[i] = new Cuu();
				arr[i]->Nhap();
				break;
			}
			case 3:
			{
				cout << "Nhap thong tin cua De:" << endl;
				arr[i] = new De();
				arr[i]->Nhap();
				break;
			}
			default:
			{
				break;
			}
			}
		}
	}
	void KeuLenViDoi()
	{
		cout << "Cac tieng keu nghe duoc khi nong trai bi bo doi:" << endl;
		for (int i = 0; i < SoLuongGiaSuc; i++)
		{
			arr[i]->KeuLen();
		}
	}

	void SauThoiGianNuoi(int nam)
	{
		for (int i = 1; i <= nam; i++)
		{
			for (int j = 0; j < SoLuongGiaSuc; j++)
			{
				arr[j]->SinhCon();
				arr[j]->ChoSua();
				arr[j]->LenTuoi();
			}
		}
	}

	void ThongKe()
	{
		int tongbocon = 0;
		int tongcuucon = 0;
		int tongdecon = 0;
		float tongsua = 0;
		for (int i = 0; i < SoLuongGiaSuc; i++)
		{
			if (arr[i]->type == 1)
				tongbocon = tongbocon + arr[i]->GetCon();
			else if (arr[i]->type == 2)
				tongcuucon = tongcuucon + arr[i]->GetCon();
			else if (arr[i]->type == 3)
				tongdecon = tongdecon + arr[i]->GetCon();
			tongsua = tongsua + arr[i]->GetSua();
		}
		cout << "TongSo bocon sau thoi gian duoc sinhra la: " << tongbocon << " con." << endl;
		cout << "TongSo cuucon sau thoi gian duoc sinhra la: " << tongcuucon << " con." << endl;
		cout << "TongSo decon sau thoi gian duoc sinhra la: " << tongdecon << " con." << endl;
		cout << "TongSo sua sau thoi gian nuoi do co duoc la: " << tongsua << " lit." << endl;
		for (int i = 0; i < tongbocon; i++)
		{
			arr.push_back(new Bo);
		}
		for (int i = 0; i < tongcuucon; i++)
		{
			arr.push_back(new Cuu);
		}
		for (int i = 0; i < tongdecon; i++)
		{
			arr.push_back(new De);
		}
		cout << "TongSo Gia Suc sau thoi gian nuoi la: " << arr.size() << " con." << endl;
	}

	//~NongTrai()
	//{
	//	for (int i = 0; i < SoLuongGiaSuc; i++)
	//	{
	//		delete[] arr[i];
	//		arr[i] = nullptr;
	//	}
	//	delete[] arr;
	//	arr = nullptr;
	//}
};



