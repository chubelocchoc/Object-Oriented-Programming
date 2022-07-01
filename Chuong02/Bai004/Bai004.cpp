#include <iostream>
using namespace std;
#define PI 3.1416

void Nhap(int&);
float dientich(int);


int main()
{
	cout << "Bai 004" << endl;
	cout << "Nhap r: \n";
	int r;
	Nhap(r);
	float dt = dientich(r);
	cout << "\nDien tich hinh cau: " << dt << endl;

	return 1;
}

void Nhap(int& r)
{

	cin >> r;

}

float dientich(int r)
{
	float dt = 4 * PI * r * r;


	return dt;
}