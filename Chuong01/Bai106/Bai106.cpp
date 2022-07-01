#include <iostream>
#include <math.h> 
using namespace std;

int main()
{
	cout << "Bai 106 \n" << "nhap x: ";
	float S = 0;
	float x;
	cin >> x;
	int i = 0;
	int T = 1;
	double coso = x;
	
	float dd = pow(10, -6);
	int dau = 1;

	while (sin(coso) >= dd)
	{
		coso = pow(x, 2 * i + 1) / (float)T * (2*i+1);
		S = S + sin(dau * coso);
		i++;
		dau = dau * (-1);
	}
	cout << "tong la: " << S << endl;
	system("pause");



	return 1;
}