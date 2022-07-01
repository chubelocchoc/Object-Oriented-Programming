#include <iostream>
using namespace std;

int main()
{
	cout << "Bai 068 \n" << "nhap vao so n: ";
	int n;
	cin >> n;
	int t = 1;
	int S = 0;
	int i = 1;
	while (i <= n)
	{
		t = t * i;
		S = S + t;
		i++;
	}
	cout << "tong la: " << S << endl;
	system("pause");



	return 1;
}