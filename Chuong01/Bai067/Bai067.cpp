#include <iostream>
using namespace std;


int main()
{
	cout << "Bai 067 \n" << "nhap vao so n: ";
	int n;
	cin >> n;
	int i = n;
	int flag = 0;
	while (i != 0)
	{
		int dv = i % 10;
		if (dv % 2 != 0)

			flag = 1;

		i = i / 10;
	}
	if (flag == 1)
	{
		cout << "co ton tai" << endl;
	}
	else
		cout << "khong ton tai" << endl;
	system("pause");

	return 1;
}