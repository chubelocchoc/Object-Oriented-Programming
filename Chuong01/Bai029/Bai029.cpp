#include <iostream>
using namespace std;


int main()
{
	cout << "Bai 029" << endl;
	int n;
	cout << "nhap n= ";
	cin >> n;
	float S = 0;
	int i = 1;

	while (i <= n)
	{
		S = S + (float)1 / i;
		i = i + 1;
	}
	cout << "tong la: " << S << endl;
	system("pause");



	return 1;
}