#include <iostream>;
using namespace std;

int main()
{
	cout << " Bai 001" << endl;
	cout << "Nhap x1, y1, x2, y2: \n";
	int x1, x2, y1, y2;
	cout << "x1 = ";
	cin >> x1;

	cout << "y1 = ";
	cin >> y1;

	cout << "x2 = ";
	cin >> x2;

	cout << "y2 = ";
	cin >> y2;

	float d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	cout << "\nKhoang cach la: " << d;

	return 1;
}