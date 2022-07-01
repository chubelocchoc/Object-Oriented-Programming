#include <iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	cout << "Bai 150" << endl;
	cout << "nhap a va b \n" << "a, b = ";
	int a, b;
	cin >> a >> b;
	int BCLL = 0;
	int m = abs(a);
	int n = abs(b);
	if (a == 0)
	{
		BCLL = a;
	}
	else
	{
		if (b == 0)
		{
			BCLL = b;
		}
		else
		{
			while (m * n != 0)
			{
				if (m > n)
				{
					m = m - n;
				}
				else
				{
					n = n - m;
				}


			}
			BCLL = abs(a * b) / (float)(m + n);
		}
	}


	cout << " Boi chung lon nhat la: " << BCLL;
	cout << endl;

	system("pause");

	return 1;
}