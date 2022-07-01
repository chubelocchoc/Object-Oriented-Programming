#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Bai 057: Tinh tong cac uoc so nho hon n cua so nguyen duong n" << endl;
	cout << "Nhap so nguyen duong n = ";
	cin >> n;

	int i = 1;
	int S = 0;

	while (i < n)
	{
		if (n % i == 0) {
			S = S + i;
		}
		i = i + 1;
	}

	cout << "Tong cac uoc so nho hon n cua so nguyen duong n la: " << S << endl;
	system("pause");
	return 1;
}