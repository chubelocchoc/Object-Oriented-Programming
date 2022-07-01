#include <iostream>
using namespace std;


int main()
{
	cout << " Bai 025" << endl << " nhap 2 so a va b lan luot la: \n";
	int a, b;
	cin >> a >> b;
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "gia tri cua a va b sau khi hoan vi la: \n a= " << a << endl << " b= " << b << "\n";
	system("pause");

	return 1;
}
