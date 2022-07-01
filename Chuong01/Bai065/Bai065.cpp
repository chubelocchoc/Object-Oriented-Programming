#include <iostream>
using namespace std;


int main()
{
	cout << "Bai 065" << endl;
	int n;
	cout << "nhap n= ";
	cin >> n;
	int nn = n % 10;
	int t = n;

	while (t != 0)

	{
		int cs = (t % 10);
		if (cs <= nn)
		{
			nn = cs;
		}
		t = t / 10;
	}
	cout << "chu so nho nhat la: " << nn << endl;
	system("pause");



	return 1;
}