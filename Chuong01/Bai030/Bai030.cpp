#include <iostream>
using namespace std;


int main()
{
	cout << "Bai 030" << endl;
	int n;
	cout << "nhap n= ";
	cin >> n;
	float S = 0;
	int i = 2;

	while (i <= 2 * n)
	{
		S = S + (float)1 / i;
		i = i + 2;
	}
	cout << "tong la: " << S << endl;
	system("pause");



	return 1;
}