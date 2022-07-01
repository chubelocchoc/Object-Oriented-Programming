#include<iostream>
using namespace std;
#include<ctime>
#include<iomanip>

struct mangdong
{
	int* a = nullptr;
	int n = 0;
};
typedef struct mangdong MANGDONG;

void Nhap(MANGDONG);
void Xuat(MANGDONG);

int main()
{
	srand(time(NULL));
	MANGDONG p;
	p.n  = rand() % 101;
	p.a = new int[p.n];
	Nhap(p);
	Xuat(p);
	delete[]p.a;
	p.a = nullptr;
	return 0;
}

void Nhap(MANGDONG p)
{
	srand(time(NULL));
	for (int i = 0; i < p.n; i++)
	{
		p.a[i] = rand() % 201 - 100;
	}
}

void Xuat(MANGDONG p)
{
	cout << "Mang ban dau la:";
	for (int i = 0; i < p.n; i++)
	{
		cout << p.a[i] << "\t";

	}
	cout << "\n";
}