#include <iostream>;
using namespace std;
#define PI 3.1416

int main()
{
	cout << " Bai 004" << endl;
	cout << "Nhap ban kinh: ";
	float r;
	cin >> r;

	float dt = 4 * PI * r * r;
	cout << " Dien tich hinh cau:" << dt << endl;

	return 1;
}