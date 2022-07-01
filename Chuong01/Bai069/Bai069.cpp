#include <iostream>
using namespace std;

int main()
{
	cout << "Bai 069 \n" << "nhap vao so x va n: " << endl;
	int n, x;
	cin >> x >> n;
	int t = 1;
	int S = 0;
	int i = 1;
	while (i <= n)
	{
		t = t * x;
		S = S + t;
		i++;
	}
	cout << "tong la: " << S << endl;
	system("pause");



	return 1;
}