#include <iostream>
using namespace std;

int main()
{
	cout << "Bai 145" << endl;
	cout << "nhap n nhanh di \n" << "n = ";
	int n;
	cin >> n;
	int flag = 0;
	int t = 1;
	while (t <= n)
	{
		if (pow(t, 2) == n)
		{
			flag = 1;

		}
		t = t + 1;

	}
	if (flag == 1)
	{
		cout << n << " la so chinh phuong";

	}
	else
	{
		cout << n << " khong phai la so chinh phuong";
	}
	cout << endl;

	system("pause");

	return 1;
}