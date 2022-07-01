#include <iostream>
using namespace std;

void Nhap(int&);
float quydoi(int);


int main()
{
	cout << "Bai 006" << endl;
	cout << "Nhap do C: \n";
	int r;
	Nhap(r);
	float dt = quydoi(r);
	cout << "\nDien tich xung quanh: " << dt << endl;

	return 1;
}

void Nhap(int& doC)
{

	cin >> doC;

}

float quydoi(int r)
{
	float doF = (float)9 / 5 * r + 32;


	return doF;
}