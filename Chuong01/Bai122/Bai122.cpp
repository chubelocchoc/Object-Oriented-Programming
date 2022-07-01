#include <iostream>
using namespace std;

#include <stdio.h>;

int main() {
	cout << "Nhap n (n>2): ";
	int n, i = 2, aTruoc = 1, bTruoc = 1, aHienHanh, bHienHanh;
	cin >> n;
	while (i <= n)
	{
		aHienHanh = 3 * bTruoc + 2 * aTruoc;
		bHienHanh = aTruoc + 3 * bTruoc;
		aTruoc = aHienHanh;
		bTruoc = bHienHanh;
		i++;
	}
	printf("So hang thu %d cua day la\na%d = %d\nb%d = %d", n, n, aHienHanh, n, bHienHanh);
	return 1;
}