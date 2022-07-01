#include <iostream>
using namespace std;

int main()
{
	cout << "Bai 146" << endl;
	cout << "nhap n \n" << "n = ";
	int n;
	cin >> n;
	int dx = 0;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		dx = dx * 10 + dv;

		t = t / 10;

	}
	if (dx == n)
	{
		cout << n << " la so doi xung";

	}
	else
	{
		cout << n << " khong phai la so doi xung";
	}
	cout << endl;

	system("pause");

	return 1;
}