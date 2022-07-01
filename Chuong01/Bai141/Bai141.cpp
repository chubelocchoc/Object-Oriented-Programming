#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	cout << "nhap n nhanh di \n" << "n = ";
	int n;
	cin >> n;
	int dt = abs(n);
	while (dt >= 10)
	{
		dt = dt / 10;

	}
	cout << " so cuoi cung la " << dt;

	return 1;
}