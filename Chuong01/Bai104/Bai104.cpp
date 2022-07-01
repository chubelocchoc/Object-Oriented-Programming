#include <iostream>
using namespace std;

int main()
{
	cout << "Bai 104 \n";
	float S = 0;
	float e = 1;
	int i = 1;
	float dd = pow(10, -6);
	while (e >= dd)
	{
		e = (float)1 / (i * (i++));
		S = S + e;
		i = i + 1;
	}
	cout << "tong la: " << S << endl;
	system("pause");



	return 1;
}