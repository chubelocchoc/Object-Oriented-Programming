#pragma once
#include<iostream>
#include<string>
using namespace std;

class Candidate
{
private:
	string Code;
	string FullName;
	string BirthDate;
	int MathScore;
	int VanScore;
	int EnglishScore;
public:
	void Nhap();
	void Xuat();
	int getmath()
	{
		return MathScore;
	}
	int getvan()
	{
		return VanScore;
	}
	int geteng()
	{
		return EnglishScore;
	}

	float TotalScore()
	{
		float total = 0;
		total = MathScore + EnglishScore + VanScore;
		return total;
	}
};

