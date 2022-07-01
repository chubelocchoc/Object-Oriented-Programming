#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Bai 052: Dem so luong uoc so cua n" << endl;
	cout << "Nhap so nguyen duong n = ";
	cin >> n;

	int i = 1;
	int T = 1;
	int dem = 0;

	while (i <= n)
	{
		if (n % i == 0) {
			dem++;
		}
		i = i + 1;
	}

	cout << "So luong cac uoc so cua n la: " << dem << endl;
	system("pause");
	return 1;
}