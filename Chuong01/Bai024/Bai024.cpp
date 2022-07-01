#include <iostream>
using namespace std;


int main()
{
	cout << " Bai 024" << endl << " nhap so n =";
	int n;
	cin >> n;
	int ht = n / 100 % 10;
	cout << "chu so hang tram cua " << n << " la: " << ht << "\n";
	system("pause");

	return 1;
}
