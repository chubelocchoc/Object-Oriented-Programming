#include <iostream>
using namespace std;


int main()
{
	cout << "Bai 062" << endl;
	int n;
	cout << "nhap n= ";
	cin >> n;
	int S = 0;
	int t = n;

	while (t != 0)
	{
		int cs = (t % 10);
		if (cs % 2 == 0)
		{
			S = S + cs;
		}
		t = t / 10;
	}
	cout << "tong chu so chan la: " << S << endl;
	system("pause");



	return 1;
}