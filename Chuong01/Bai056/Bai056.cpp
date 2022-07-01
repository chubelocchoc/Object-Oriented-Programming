#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Bai 056: Dem so luong cac uoc so chan cua so nguyen duong n" << endl;
	cout << "Nhap so nguyen duong n = ";
	cin >> n;

	int i = 2;
	int dem = 0;

	while (i <= n)
	{
		if (n % i == 0) {
			dem++;
		}
		i = i + 2;
	}

	cout << "So luong cac uoc so chan cua so nguyen duong n la: " << dem << endl;
	system("pause");
	return 1;
}