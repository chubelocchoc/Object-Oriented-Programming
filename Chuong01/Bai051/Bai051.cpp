#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Bai 051: Tinh tich cac uoc so cua n" << endl;
	cout << "Nhap so nguyen duong n = ";
	cin >> n;

	int i = 1;
	int T = 1;

	while (i <= n)
	{
		if (n % i == 0) 
		{
			T = T * i;
		}
		i = i + 1;
	}

	cout << "Tong cac uoc so cua n la: " << T << endl;
	system("pause");
	return 1;
}