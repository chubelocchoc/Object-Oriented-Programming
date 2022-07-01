#include <iostream>;
using namespace std;
#define PI 3.1416

int main()
{
	cout << " Bai 003" << endl;
	cout << "Nhap ban kinh: ";
	float r;
	cin >> r;

	float cv = PI * 2 * r;
	cout << "Chu vi duong tron: " << cv<< endl;

	return 1;
}