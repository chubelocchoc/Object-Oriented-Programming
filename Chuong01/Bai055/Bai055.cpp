#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Bai 055: Tinh tich cac uoc so le cua so nguyen duong n" << endl;
	cout << "Nhap so nguyen duong n = ";
	cin >> n;

	int i = 1;
	int T = 1;

	while (i <= n)
	{
		if (n % i == 0) {
			T = T * i;
		}
		i = i + 2;
	}

	cout << "Tich cac uoc so le cua so nguyen duong n la: " << T << endl;
	system("pause");
	return 1;
}