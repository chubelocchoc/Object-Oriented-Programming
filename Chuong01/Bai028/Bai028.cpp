#include <iostream>
using namespace std;


int main()
{
	cout << "Bai 028" << endl;
	int n;
	cout << "nhap n= ";
	cin >> n;
	int S = 0;
	int i = 1;
	int T = 1;

	while (i <= n)
	{
		T = T * T;
		S = S + pow(i, 2);
		i = i + 1;
	}
	cout << "tong la: " << S << endl;
	system("pause");



	return 1;
}