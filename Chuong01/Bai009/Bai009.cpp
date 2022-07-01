#include <iostream>;
using namespace std;
#include <stdio.h>;
#include <math.h>;

#define PI 3.1416

int main() 
{
	cout << " Bai 009" << endl;
	cout << "Nhap ban kinh";
	float r, dt;
	int n;
	cin >> r;
	cout << "Nhap so canh noi tiep";
	cin >> n;
	dt = 1.0 / 2 * n * r * r * sin(2 * PI / n);
	printf("Dien tich cua da giac deu co %d canh noi tiep trong duong tron ban kinh %f la: %f", n, r, dt);
	return 1;

}