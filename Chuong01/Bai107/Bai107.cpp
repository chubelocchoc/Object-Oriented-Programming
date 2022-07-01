#include <iostream>
#include <math.h> 
using namespace std;

int main()
{
	cout << "Bai 107 \n" << "nhap x: ";
	float S = 0;
	float x;
	cin >> x;
	int i = 0;
	int T = 1;
	double coso = x;

	float dd = pow(10, -6);
	int dau = 1;

	while (cos(coso) >= dd)
	{
		coso = pow(x, 2 * i) / (float)T * (2*i);
		S = S + cos(dau * coso);
		i++;
		dau = dau * (-1);
	}
	cout << "tong la: " << S << endl;
	system("pause");



	return 1;
}