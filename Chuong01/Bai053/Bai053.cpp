#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Bai 053: Liet ke cac uoc so le cua so nguyen duong n" << endl;
	cout << "Nhap so nguyen duong n = ";
	cin >> n;

	int i = 1;

	cout << "Cac uoc so le cua so nguyen duong n la: ";
	while (i <= n)
	{
		if (n % i == 0) {
			if (i != 1) {
				cout << ", ";
			}
			cout << i;
		}
		i = i + 2;
	}

	cout << endl;
	system("pause");
	return 1;
}