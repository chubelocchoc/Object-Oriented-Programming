#include <iostream>;
using namespace std;

#include <stdio.h>;
#include <math.h>;

#define PI 3.1416


int main()
{
	cout << " Bai 008" << endl;
	cout << "Nhap so canh: ";
	int n;
	cin >> n;

	cout << "Nhap ban kinh duong tron: ";
	float r;
	cin >> r;

	float cv = 2 * n * r * sin(PI / n);
	printf("Chu vi cua da giac deu co %d canh noi tiep trong duong tron ban kinh %f la: %f", n, r, cv);

	return 1;
}