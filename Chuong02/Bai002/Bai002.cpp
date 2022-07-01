#include <iostream>
using namespace std;
#define PI 3.1416

void Nhap(int&);
float bankinh(int);


int main()
{
	cout << "Bai 002" << endl;
	cout << "Nhap r: \n";
	int r;
	Nhap(r);
	float dt = bankinh(r);
	cout << "\nDien tich duong tron: " << dt << endl;

	return 1;
}

void Nhap(int& r)
{

		cin >> r;

}

float bankinh(int r)
{
	float dt = PI * pow(r, 2);


	return dt;
}