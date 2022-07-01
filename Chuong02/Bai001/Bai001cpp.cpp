#include <iostream>
using namespace std;

void Nhap(int&, int&, int&, int&);
float khoangcach(int, int, int, int);


int main()
{
	cout << "Bai 001" << endl;
	cout << "Nhap x1, y1, x2, y2: \n";
	int x1, y1, x2, y2;
	Nhap(x1, y1, x2, y2);
	float kc = khoangcach(x1, y1, x2, y2);
	cout << "\nKhoang cach la: " << kc << endl;

	return 1;
}

void Nhap(int& x1, int& y1, int& x2, int& y2)
{

	cout << "x1 = ";
	cin >> x1;

	cout << "y1 = ";
	cin >> y1;

	cout << "x2 = ";
	cin >> x2;

	cout << "y2 = ";
	cin >> y2;

}

float khoangcach(int x1, int y1, int x2, int y2)
{
	float d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));


	return d;
}