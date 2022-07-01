#include <iostream>
using namespace std;


int main()
{
	cout << "nhap n nhanh di \n" << "n = ";
	int n;
	cin >> n;
	int dn = 0;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		dn = dn * 10 + dv;
		t = t / 10;

	}
	cout << " so dao nguoc la " << dn;
	cout << endl;

	return 1;
}