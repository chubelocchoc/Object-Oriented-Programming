#pragma once
#include<iostream>
using namespace std;
#include"Candidate.h"
class TestCandidate
{
private:
	int n;
	Candidate* A;
public:

	void Nhap()
	{
		cout << "nhap so thi sinh:" << endl;
		cin >> n;
		A = new Candidate[n];
		for (int i = 0; i < n; i++)
		{
			cout << "Nhap thong tin thisinh " << i+1 << endl;
			A[i].Nhap();
		}
	}
	void HighestScore()
	{
		cout << "nhung thi sinh co tong diem cao nhat:" << endl;
		float temp = 0;
		int flag = 0;
		for (int i = 0; i < n; i++)
		{
			if (temp < A[i].TotalScore())
				temp = A[i].TotalScore();
		}
		for (int i = 0; i < n; i++)
		{
			if (temp == A[i].TotalScore())
				A[i].Xuat();
		}
	}

	~TestCandidate()
	{
		delete[] A;
		A = nullptr;
	}
};

