#include <iostream>
using namespace std;



int main()
{
	cout << "Bai 165" << endl;
	cout << "nhap n \n" << "n = ";
	int n;
	cin >> n;
	int kq = 0;
	for (int k = 0; pow(2, k) < n; k++)
	{
		kq = k;
	}
	cout << " k = " << kq;
	cout << endl;

	system("pause");
	return 1;
}