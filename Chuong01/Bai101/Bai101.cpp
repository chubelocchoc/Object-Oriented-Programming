#include <iostream>
using namespace std;

int main()
{
	cout << "Bai 101 \n";
	float S = 0;
	float e = 1;
	int i = 1;
	float dd = pow(10, -6);
	while (e >= dd)
	{
		e = (float)1 / i;
		S = S + e;
		i++;
	}
	cout << "tong la: " << S << endl;
	system("pause");



	return 1;
}