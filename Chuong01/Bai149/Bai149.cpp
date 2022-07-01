#include <iostream>
using namespace std;

int main()
{
	cout << "Bai 149" << endl;
	cout << "nhap a va b \n" << "a, b = ";
	int a, b;
	cin >> a >> b;
	int UCLL = 0;
	if (a == 0)
	{
		UCLL = b;
	}
	else
	{
		if (b == 0)
		{
			UCLL = a;
		}
		else
		{
			while (a != b)
			{
				if (a > b)
				{
					a = a - b;
				}
				else
				{
					b = b - a;
				}


			}
			UCLL = a;
		}
	}


	cout << " uoc chung lon nhat la: " << UCLL;
	cout << endl;

	system("pause");

	return 1;
}