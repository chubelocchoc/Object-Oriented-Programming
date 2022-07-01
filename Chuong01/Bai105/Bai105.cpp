#include <iostream>
using namespace std;

int main()
{
	cout << "Bai 105  \n";
	float S = 0;
	float e = 0;
	int i = 1;
	float dd = pow(10, -6);
	while (1 / (e + i) >= dd)
	{
		S = S + 1 / (e + i);
		e = e + i;
		i++;
	}
	cout << "tong la: " << S << endl;
	system("pause");



	return 1;
}