#include <iostream>
using namespace std;


int main()
{
	cout << "Bai 061" << endl;
	int n;
	cout << "nhap n= ";
	cin >> n;
	int S = 0;
	int t = n;

	while (t != 0)
	{
		int cs = (t % 10) + 1;
		if (cs % 2 == 0)
		{
			S = S + 1;
		}
		t = t / 10;
	}
	cout << "so luong chu so la: " << S << endl;
	system("pause");



	return 1;
}