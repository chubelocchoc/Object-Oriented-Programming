#include <iostream>
using namespace std;


int main()
{
	cout << "Bai 027" << endl;
	int n;
	cout << "nhap n= ";
	cin >> n;
	int S = 0;
	int i = 1;

	while (i <= n)
	{
		S = S + i;
		i = i + 1;
	}
	cout << "tong la: " << S << endl;
	system("pause");



	return 1;
}