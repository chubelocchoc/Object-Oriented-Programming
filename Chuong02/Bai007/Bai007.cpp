#include <iostream>
using namespace std;

void Nhap(float&);
float quydoi(float);


int main()
{
	cout << "Bai 007" << endl;
	cout << "Nhap do F: \n";
	float r;
	Nhap(r);
	float dt = quydoi(r);
	cout << "\nDien tich xung quanh: " << dt << endl;

	return 1;
}

void Nhap(float& doF)
{

	cin >> doF;

}

float quydoi(float r)
{
	float doC = (float)5 / 9 * r - 32;


	return doC;
}