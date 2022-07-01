#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Bai 054: Tinh tong cac uoc so chan cua so nguyen duong n" << endl;
	cout << "Nhap so nguyen duong n = ";
	cin >> n;

	int i = 2;
	int S = 0;

	while (i <= n)
	{
		if (n % i == 0) {
			S = S + i;
		}
		i = i + 2;
	}

	cout << "Tong uoc so chan cua so nguyen duong n la: " << S << endl;
	system("pause");
	return 1;
}