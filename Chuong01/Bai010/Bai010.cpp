#include <iostream>;
using namespace std;
#include <stdio.h>;

int main()
{
	cout << " Bai 010" << endl;
	cout << "Nhap A(x1, y1) , B(x2, y2), C(x3, y3):  \n";
	int x1, x2, y1, y2, x3, y3;
	cout << "x1 = ";
	cin >> x1;

	cout << "y1 = ";
	cin >> y1;

	cout << "x2 = ";
	cin >> x2;

	cout << "y2 = ";
	cin >> y2;

	cout << "x3 = ";
	cin >> x3;

	cout << "y3 = ";
	cin >> y3;

	float dAB = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	float dAC = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
	float dBC = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	float cv = dAB + dAC + dBC;
	printf("Chu vi cua tam giac co 3 dinh A(%d,%d), B(%d,%d), C(%d,%d) la: %f \n", x1, y1, x2, y2, x3, y3, cv);

	return 1;
}