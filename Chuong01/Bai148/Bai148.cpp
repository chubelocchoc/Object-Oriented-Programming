#include <iostream>
using namespace std;

int main()
{
	cout << "Bai 148" << endl;
	cout << "nhap n \n" << "n = ";
	int n;
	cin >> n;
	int flag = 1;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
		{
			flag = 0;

		}
		t = t / 10;
	}
	if (flag == 0)
	{
		cout << n << " khong la so toan chan";

	}
	else
	{
		cout << n << " la so toan chan";
	}
	cout << endl;

	system("pause");

	return 1;
}