#include <iostream>
using namespace std;

int main()
{
	int n, dv;
	cout << "Bai 059: Dem so luong chu so cua so nguyen duong n" << endl;
	cout << "Nhap so nguyen duong = ";
	cin >> n;

	int dem = 0, t = n;
	while (t != 0)
	{
		dv = t % 10;
		dem++;
		t = t / 10;
	}
	cout << "So luong cac chu so cua so nguyen duong n = " << dem << endl;
	system("pause");
	return 1;
}