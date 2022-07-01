#include <iostream>
using namespace std;


int main()
{
	cout << "Bai 064" << endl;
	int n;
	cout << "nhap n= ";
	cin >> n;
	int ln = n % 10;
	int t = n;

	while (t != 0)
	{
		int cs = (t % 10);
		if (cs >= ln)
		{
			ln = cs;
		}
		t = t / 10;
	}
	cout << "chu so lon nhat la: " << ln << endl;
	system("pause");



	return 1;
}