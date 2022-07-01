#include <iostream>
using namespace std;
#define PI 3.1416

void Nhap(int&);
float chuvi(int);


int main()
{
	cout << "Bai 003" << endl;
	cout << "Nhap r: \n";
	int r;
	Nhap(r);
	float dt = chuvi(r);
	cout << "\nChu vi duong tron: " << dt << endl;

	return 1;
}

void Nhap(int& r)
{

	cin >> r;

}

float chuvi(int r)
{
	float cv = PI * 2 * r;


	return cv;
}