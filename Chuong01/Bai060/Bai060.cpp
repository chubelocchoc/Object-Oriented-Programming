#include <iostream>
using namespace std;

int main()
{
	int n, dv;
	cout << "Bai 060: Tim tich cac chu so cua so nguyen duong n" << endl;
	cout << "Nhap so nguyen duong n = ";
	cin >> n;

	int T = 1, t = n;
	while (t != 0)
	{
		dv = t % 10;
		T = T * dv;
		t = t / 10;
	}
	cout << "Tich cac chu so cua so nguyen duong n = " << T << endl;
	system("pause");
	return 1;
}