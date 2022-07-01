#include <iostream>;
using namespace std;
#define PI 3.1416

int main()
{
	cout << " Bai 004" << endl;
	cout << "Nhap ban kinh: ";
	float r;
	cin >> r;

	float tt = (float)4 / 3 * PI * pow(r, 3);
	cout << " Dien tich xung quanh: " << tt << endl;

	return 1;
}